#pragma once
#include "header.h"

// change to use ep<T>
template<class T>
vector<vector<T>> edgeToMatrix(const EdgeList<T>& edge, T non_edge = inf) {
	int n = edge.numV();
	vector<vector<T>> graph(n, vector<T>(n, inf));
	rep(i, 0, edge.numE())
		graph[get<0>(edge[i])][get<1>(edge[i])] = get<2>(edge[i]);
	return graph;
}

inline void sortEdges() { sort(all(edges), [](const tuple<int, int, T>& v1, const tuple<int, int, T>& v2) { return get<2>(v1) < get<2>(v2); }); }