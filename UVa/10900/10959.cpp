#include <bits/stdc++.h>
#include "shortest_path.h"

int main() {
	int T, n, e, v1, v2;
	cin >> T;
	for (int X = 0; X < T; X++) {
		cin >> n >> e;
		AdjList<int> graph(n);
		for (int i = 0; i < e; i++) {
			cin >> v1 >> v2;
			graph.push(v1, v2);
			graph.push(v2, v1);
		}

		vi path = dijkstra(graph, 0).first;
		if (X > 0)
			printf("\n");
		for (int i = 1; i < n; i++)
			printf("%d\n", path[i]);
	}
}
