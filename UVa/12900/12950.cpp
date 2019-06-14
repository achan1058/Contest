#include <bits/stdc++.h>
#include "shortest_path.h"
#include "header.h"

int main() {
	int n, e, v1, v2, c;
	while (cin >> n >> e) {
		adj_list<int> graph(2 * n);
		rep(i, 0, e) {
			cin >> v1 >> v2 >> c;
			v1--;
			v2--;
			graph[v1].pb({ v2 + n, c });
			graph[v2].pb({ v1 + n, c });
			graph[v1 + n].pb({ v2, c });
			graph[v2 + n].pb({ v1, c });
		}
		vi dist = dijkstra(graph, 0).first;
		print(dist[n - 1] == inf ? -1 : dist[n - 1]);
	}
}
