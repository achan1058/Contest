#include <bits/stdc++.h>
#include "shortest_path.h"

int main() {
	int n, e, v1, v2;
	forX() {
		cin >> n >> e;
		vvp<int> graph(n);
		for (int i = 0; i < e; i++) {
			cin >> v1 >> v2;
			graph[v1].pb({ v2, 1 });
			graph[v2].pb({ v1, 1 });
		}

		vi path = dijkstra(graph, 0).first;
		printX("");
		for (int i = 1; i < n; i++)
			printf("%d\n", path[i]);
	}
}
