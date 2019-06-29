#include <bits/stdc++.h>
#include "shortest_path.h"
#include "header.h"

int main() {
	forX() {
		int n, e, t, m, v1, v2, r;
		cin >> n >> e >> t >> m;
		adj_list<int> graph(n);
		rep(i, 0, m) {
			cin >> v1 >> v2 >> r;
			graph[v2 - 1].pb({ v1 - 1, r });
		}
		vi dist = dijkstra(graph, e - 1).first;
		int ans = 0;
		rep(i, 0, n) {
			if (i == e - 1 || dist[i] <= t)
				ans++;
		}
		printX(ans);
	}
}
