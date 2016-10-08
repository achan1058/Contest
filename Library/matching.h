#pragma once
#include "header.h"

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
