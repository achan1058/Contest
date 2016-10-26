#pragma once
#include "header.h"

// change to use ep<T>
template<class T>
vector<vector<T>> edgeToMatrix(const vt<T>& edges, T non_edge = inf) {
	int n = 0;
	irep(e, edges)
		n = max(n, max(get<0>(e), get<1>(e)) + 1);

	vector<vector<T>> graph(n, vector<T>(n, inf));
	irep(e, edges)
		graph[get<0>(e)][get<1>(e)] = get<2>(e);
	return graph;
}

bool isBipartite(const vvi& graph) {
	int n = sz(graph);
	vi color(n);
	rep(i, 0, n) {
		if (color[i] != 0)
			continue;
		queue<int> q;
		q.push(i);
		color[i] = 1;
		while (!q.empty()) {
			int v = q.front();
			q.pop();
			irep(e, graph[v]) {
				if (color[e] == color[v])
					return false;
				else if (color[e] == 0) {
					color[e] = 3 - color[v];
					q.push(e);
				}
			}
		}
	}
	return true;
}
