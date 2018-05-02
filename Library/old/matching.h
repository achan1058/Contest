#pragma once
#include <bits/stdc++.h>
using namespace std;
/*
// graph is bipartite with r and c vtx in the two components
vector<pii> matching(const vvb& graph) {
	vvb reduced = graph;
	int r = graph.size(), c = graph[0].size();
	vi row_match(r, -1), col_match(c, -1);

	for (int j = 0; j < c; j++) {
		queue<int> q;
		vi col_prev(c, -1);
		q.push(j);
		while (!q.empty()) {
			int v = q.front();
			q.pop();
			for (int i = 0; i < r; i++) {
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
*/
