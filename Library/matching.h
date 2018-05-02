#pragma once
#include <bits/stdc++.h>
using namespace std;

// requires rows <= cols, graph is bipartite with r and c vtx in the two components
template<class T>
pair<T, vector<int>> hungarian(const vector<vector<T>>& graph) {
	vector<vector<T>> reduced = graph;
	int r = graph.size(), c = graph[0].size(), match_size = 0;
	vector<bool> row_covered(r), col_covered(c);
	vector<int> row_match(r, -1), col_match(c, -1);
	for (int i = 0; i < r; i++) {
		T small = inf;
		for (int j = 0; j < c; j++)
			small = min(small, reduced[i][j]);
		for (int j = 0; j < c; j++)
			reduced[i][j] -= small;
	}

	while (match_size < r) {
		queue<int> q;
		vector<int> row_prev(r, -1);
		while (true) {
			for (int i = 0; i < r; i++) {
				if (!row_covered[i])
					q.push(i);
			}

			while (!q.empty()) {
				int i = q.front();
				q.pop();
				for (int j = 0; j < c; j++) {
					if (!col_covered[j] && reduced[i][j] == 0) {
						if (col_match[j] == -1) {
							while (i != -1) {
								col_match[j] = i;
								swap(j, row_match[i]);
								i = row_prev[i];
							}

							for (int j = 0; j < c; j++)
								col_covered[j] = false;
							for (int i = 0; i < r; i++) {
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
			for (int i = 0; i < r; i++) {
				if (!row_covered[i]) {
					for (int j = 0; j < c; j++) {
						if (!col_covered[j])
							small = min(small, reduced[i][j]);
					}
				}
			}
		for (int i = 0; i < r; i++) {
				if (row_covered[i]) {
					for (int j = 0; j < c; j++) {
						if (col_covered[j])
							reduced[i][j] += small;
					}
				} else {
					for (int j = 0; j < c; j++) {
						if (!col_covered[j])
							reduced[i][j] -= small;
					}
				}
			}
		}

	next_iteration:;
	}

	T result = 0;
	for (int i = 0; i < r; i++) {
		if (row_match[i] != -1)
			result += graph[i][row_match[i]];
	}
	return make_pair(result, row_match);
}
