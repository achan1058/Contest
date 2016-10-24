#pragma once
#include "union_find.h"

// CHANGES EDGE ORDER! uses edge list, returns forest cost, num components, edges in forest
template<class T>
tuple<T, int, vt<T>> kruskal(vt<T>& edges) {
	int n = 0;
	irep(e, edges)
		n = max(n, max(get<0>(e), get<1>(e)) + 1);

	UnionFind un(n);
	T result = 0;
	vt<T> tree;
	sort(all(edges), [](const tuple<int, int, T>& v1, const tuple<int, int, T>& v2) { return get<2>(v1) < get<2>(v2); });
	irep(e, edges) {
		if (un.join(get<0>(e), get<1>(e))) {
			result += get<2>(e);
			tree.pb({ get<0>(e), get<1>(e), get<2>(e) });
		}
	}
	return make_tuple(result, sz(un.getComponentSizes()), tree);
}

// uses adjacency list, returns tree cost, component num vertex, edges in tree
template<class T>
tuple<T, int, vvp<T>> prim(const vvp<T>& graph, int start = 0, T non_edge = inf) {
	int n = sz(graph), num = 1;
	T result = 0;
	vector<T> dist(n, non_edge);
	vvp<T> tree(n);
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
		tree[v1].pb({ prev[v1], d });
		tree[prev[v1]].pb({ v1, d });
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
