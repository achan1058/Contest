#pragma once
#include "graph.h"
#include "union_find.h"

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
