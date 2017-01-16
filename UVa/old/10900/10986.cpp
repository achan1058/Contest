#include <bits/stdc++.h>
#include "shortest_path.h"

int main() {
	int n, m, s, t, v1, v2, w;
	forX() {
		cin >> n >> m >> s >> t;
		vvp<int> graph(n);
		for (int i = 0; i < m; i++) {
			cin >> v1 >> v2 >> w;
			graph[v1].pb({ v2, w });
			graph[v2].pb({ v1, w });
		}
		vector<int> dist = dijkstra(graph, s, 2 * inf).first;
		if (dist[t] == 2 * inf)
			printp("unreachable\n");
		else
			printp("%d\n", dist[t]);
	}
}
