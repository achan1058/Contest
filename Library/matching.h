#pragma once
#include "header.h"

// graph is bipartite with r and c vtx in the two components
vector<pii> matching(const vvb& graph) {
	vvb reduced = graph;
	int r = graph.size(), c = graph[0].size(), match_size = 0;
	vi row_match(r, -1), col_match(c, -1);
	bool match_found = false;

	rep(j, 0, c) {
		queue<int> q;
		vi col_prev(c, -1);
		q.push(j);
		while (!q.empty()) {
			int v = q.front();
			q.pop();
			rep(i, 0, r) {
				if (graph[i][v]) {
					if (row_match[i] == -1) {
						while (v != -1) {
							row_match[i] = v;
							swap(i, col_match[v]);
							v = col_prev[v];
						}
						goto next_iteration;
					} else if (col_prev[row_match[i]] == -1) {
						col_prev[row_match[i]] = v;
						q.push(row_match[i]);
					}
				}
			}
		}
	next_iteration:;
	}

	vector<pii> match;
	rep(i, 0, sz(row_match)) {
		if (row_match[i] != -1)
			match.pb({ i, row_match[i] });
	}
	return match;
}

// requires rows <= cols
template<class T>
pair<T, vi> hungarian(const vector<vector<T>>& graph) {
	vector<vector<T>> reduced = graph;
	int r = graph.size(), c = graph[0].size(), match_size = 0;
	vb row_covered(r), col_covered(c);
	vi row_match(r, -1), col_match(c, -1);
	rep(i, 0, r) {
		T small = inf;
		rep(j, 0, c)
			small = min(small, reduced[i][j]);
		rep(j, 0, c)
			reduced[i][j] -= small;
	}

	while (match_size < r) {
		queue<int> q;
		vi row_prev(r, -1);
		while (true) {
			rep(i, 0, r) {
				if (!row_covered[i])
					q.push(i);
			}

			while (!q.empty()) {
				int i = q.front();
				q.pop();
				rep(j, 0, c) {
					if (!col_covered[j] && reduced[i][j] == 0) {
						if (col_match[j] == -1) {
							while (i != -1) {
								col_match[j] = i;
								swap(j, row_match[i]);
								i = row_prev[i];
							}

							rep(j, 0, c)
								col_covered[j] = false;
							rep(i, 0, r) {
								if (row_match[i] != -1)
									row_covered[i] = true;
								else
									row_covered[i] = false;
							}
							match_size++;
							goto next_iteration;
						} else {
							row_prev[col_match[j]] = i;
							row_covered[col_match[j]] = false;
							col_covered[j] = true;
							q.push(col_match[j]);
						}
					}
				}
			}

			T small = inf;
			rep(i, 0, r) {
				if (!row_covered[i]) {
					rep(j, 0, c) {
						if (!col_covered[j])
							small = min(small, reduced[i][j]);
					}
				}
			}
			rep(i, 0, r) {
				if (row_covered[i]) {
					rep(j, 0, c) {
						if (col_covered[j])
							reduced[i][j] += small;
					}
				} else {
					rep(j, 0, c) {
						if (!col_covered[j])
							reduced[i][j] -= small;
					}
				}
			}
		}

	next_iteration:;
	}

	T result = 0;
	rep(i, 0, r) {
		if (row_match[i] != -1)
			result += graph[i][row_match[i]];
	}
	return make_pair(result, row_match);
}