#pragma once
#include "header.h"

// uses adjacency matrix, count loop edge twice for undirected graph
vi eularianHelper(vvi& graph, int n, int end, bool directed) {
	vi path, check(n);
	stack<int> s;
	s.push(end);

	while (!s.empty()) {
		int v = s.top();
		bool found = false;
		for (; check[v] < n; check[v]++) {
			if (graph[check[v]][v] > 0) {
				if (!directed)
					graph[v][check[v]]--;

				graph[check[v]][v]--;
				s.push(check[v]);
				goto end;
			}
		}
		path.pb(v);
		s.pop();
	end:;
	}
	return path;
}

// uses adjacency matrix
vi eularianPath(const vvi& graph, bool directed = false) {
	int n = sz(graph), end = -1;
	vi deg(n);
	drep(i, j, n, n)
		deg[i] += graph[i][j];
	if (directed) {
		int indeg = 0;
		drep(i, j, n, n)
			deg[i] -= graph[j][i];
		rep(i, 0, n) {
			if (deg[i] < 0) {
				indeg -= deg[i];
				if (indeg >= 2)
					return vi();
				end = i;
			}
		}
	} else {
		int odd_deg = 0;
		rep(i, 0, n) {
			if ((deg[i] - graph[i][i]) % 2 == 1) {
				odd_deg++;
				if (odd_deg > 2)
					return vi();
				end = i;
			}
		}
	}

	if (end == -1) {
		drep(i, j, n, n) {
			if (graph[i][j] != 0) {
				end = i;
				goto found_end;
			}
		}
	}

found_end:;
	vvi reduced = graph;
	return eularianHelper(reduced, n, end, directed);
}
