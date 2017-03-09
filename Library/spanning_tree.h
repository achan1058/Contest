#pragma once
#include "graph.h"
#include "union_find.h"

// CHANGES EDGE ORDER! uses edge list, returns forest cost, num components, edges in forest
template<class T>
tuple<T, int, vector<tuple<int, int, T>>> kruskal(vector<tuple<int, int, T>>& edges, int n = 0) {
	if (n == 0) {
		irep(e, edges)
			n = max(n, max(get<0>(e), get<1>(e)) + 1);
	}
	UnionFind un(n);
	T result = 0;
	vector<tuple<int, int, T>> tree;
	sort(all(edges), [](const tuple<int, int, T>& v1, const tuple<int, int, T>& v2) { return get<2>(v1) < get<2>(v2); });
	irep(e, edges) {
		if (un.join(get<0>(e), get<1>(e))) {
			result += get<2>(e);
			tree.pb({ get<0>(e), get<1>(e), get<2>(e) });
		}
	}
	return make_tuple(result, un.getComponentSizes().size(), tree);
}

// uses adjacency list, returns tree cost, component num vertex, edges in tree
template<class T>
tuple<T, int, AdjList<T>> prim(const AdjList<T>& graph, int start = 0, T non_edge = inf) {
	int n = graph.size(), num = 1;
	T result = 0;
	vector<T> dist(n, non_edge);
	AdjList<T> tree(n);
	vi prev(n, -1);
	priority_queue<pair<T, int>, vector<pair<T, int>>, greater<pair<T, int>>> q;
	dist[start] = -inf;

	for (auto& e : graph[start]) {
		dist[e.first] = e.second;
		prev[e.first] = start;
		q.push(make_pair(dist[e.first], e.first));
	}

	while (!q.empty()) {
		T d = q.top().first;
		int v1 = q.top().second;
		q.pop();

		if (dist[v1] == -inf)
			continue;

		num++;
		result += d;
		dist[v1] = -inf;
		tree[v1].push_back({ prev[v1], d });
		tree[prev[v1]].push_back({ v1, d });
		for (auto& e : graph[v1]) {
			if (e.second < dist[e.first]) {
				dist[e.first] = e.second;
				prev[e.first] = v1;
				q.push(make_pair(dist[e.first], e.first));
			}
		}
	}
	return make_tuple(result, num, tree);
}
