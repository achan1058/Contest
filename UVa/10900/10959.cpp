#include <bits/stdc++.h>
#include "shortest_path.h"
#include "header.h"

int main() {
	forX() {
		int n, e, v1, v2;
		cin >> n >> e;
		adj_list<int> graph(n);
		rep(i, 0, e) {
			cin >> v1 >> v2;
			graph[v1].pb({ v2, 1 });
			graph[v2].pb({ v1, 1 });
		}
		vi ans = dijkstra(graph, 0).first;
		printX();
		rep(i, 1, n)
			print(ans[i]);
	}
}
