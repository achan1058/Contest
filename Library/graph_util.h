#pragma once
#include "graph.h"

template<class T>
vector<vector<T>> edgeToMatrix(const EdgeList<T>& edge, T non_edge = inf) {
	int n = edge.numV();
	vector<vector<T>> graph(n, vector<T>(n, inf));
	rep(i, 0, edge.numE())
		graph[get<0>(edge[i])][get<1>(edge[i])] = get<2>(edge[i]);
	return graph;
}
