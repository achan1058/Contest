#include <bits/stdc++.h>
#include "shortest_path.h"
#include "header.h"

int main() {
	forX() {
		int n, m, s, t, v1, v2, w;
		cin >> n >> m >> s >> t;
		adj_list<int> graph(n);
		rep(i, 0, m) {
			cin >> v1 >> v2 >> w;
			graph[v1].pb({ v2, w });
			graph[v2].pb({ v1, w });
		}
		int ans = dijkstra(graph, s).f[t];
		if (ans == inf)
			printp("unreachable");
		else
			printp("%d", ans);
	}
}
