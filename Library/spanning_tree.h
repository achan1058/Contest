#pragma once
#include "graph_util.h"
#include "union_find.h"

// CHANGES EDGE ORDER! uses edge list, returns forest cost, num components, edges in forest
template<class T>
tuple<T, int, edge_list<T>> kruskal(edge_list<T>& edges, int n = 0) {
	if (n == 0) {
		for (const auto& e : edges)
			n = max(n, max(get<0>(e), get<1>(e)) + 1);
	}
	UnionFind un(n);
	T result = 0;
	edge_list<T> tree;
	sort(edges.begin(), edges.end(), [](const tuple<int, int, T>& v1, const tuple<int, int, T>& v2) { return get<2>(v1) < get<2>(v2); });
	for (const auto& e : edges) {
		if (un.join(get<0>(e), get<1>(e))) {
			result += get<2>(e);
			tree.push_back({ get<0>(e), get<1>(e), get<2>(e) });
			n--;
		}
	}
	return{ result, n, tree };
}
