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
