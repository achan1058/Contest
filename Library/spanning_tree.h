#pragma once
#include "graph.h"
#include "union_find.h"

// CHANGES EDGE ORDER!! int is num component
template<class T>
tuple<T, int, EdgeList<T>> kruskal(EdgeList<T>& edges) {
	UnionFind un(edges.numV());
	T result = 0;
	EdgeList<T> tree;
	edges.sortEdges();
	rep(i, 0, edges.numE()) {
		if (un.join(get<0>(edges[i]), get<1>(edges[i]))) {
			result += get<2>(edges[i]);
			tree.push(get<0>(edges[i]), get<1>(edges[i]), get<2>(edges[i]));
		}
	}
	return make_tuple(result, sz(un.getComponentSizes()), tree);
}

// int is component num vertex
template<class T>
tuple<T, int, AdjList<T>> prim(const AdjList<T>& graph, int start = 0, T non_edge = inf) {
	int n = sz(graph), num = 1;
	T result = 0;
	vector<T> dist(n, non_edge);
	AdjList<T> tree(n);
	vi prev(n, -1);
	priority_queue<pair<T, int>, vector<pair<T, int>>, greater<pair<T, int>>> q;
	dist[start] = -inf;

	irep(e, graph[start]) {
		dist[e.x] = e.y;
		prev[e.x] = start;
		q.push(make_pair(dist[e.x], e.x));
	}

	while (!q.empty()) {
		T d = q.top().x;
		int v1 = q.top().y;
		q.pop();

		if (dist[v1] == -inf)
			continue;

		num++;
		result += d;
		dist[v1] = -inf;
		tree.push(v1, prev[v1], d);
		tree.push(prev[v1], v1, d);
		irep(e, graph[v1]) {
			if (e.y < dist[e.x]) {
				dist[e.x] = e.y;
				prev[e.x] = v1;
				q.push(make_pair(dist[e.x], e.x));
			}
		}
	}
	return make_tuple(result, num, tree);
}
