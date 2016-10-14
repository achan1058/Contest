#pragma once
#include "header.h"

// uses adjacency list
vi eularianHelper(vvi& graph, int n, int end, bool directed) {
	vi path, check(n);
	stack<int> s;
	s.push(end);

	while (!s.empty()) {
		int v = s.top();
		bool found = false;
		for (; check[v] < n; check[v]++) {
			if (graph[check[v]][v] > 0) {
				if (!directed && v != check[v])
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

// uses adjacency list
vi eularianPath(const vvi& graph, bool directed = false) {
	int n = sz(graph);
	vi deg(n);
	rep(i, 0, n) {
		rep(j, 0, n)
			deg[i] += graph[i][j];
	}

	int end = -1;
	if (directed) {
		int indeg = 0;
		rep(i, 0, n) {
			rep(j, 0, n)
				deg[i] -= graph[j][i];
		}
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
		rep(i, 0, n) {
			rep(j, 0, n) {
				if (graph[i][j] != 0) {
					end = i;
					goto found_end;
				}
			}
		}
	}

found_end:;
	vvi reduced = graph;
	return eularianHelper(reduced, n, end, directed);
}
