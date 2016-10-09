#include <bits/stdc++.h>
#include "shortest_path.h"

int main() {
	int N, n, m, s, t, v1, v2, w;
	cin >> N;
	for (int X = 1; X <= N; X++) {
		cin >> n >> m >> s >> t;
		AdjList<int> graph(n);
		for (int i = 0; i < m; i++) {
			cin >> v1 >> v2 >> w;
			graph.push(v1, v2, w);
			graph.push(v2, v1, w);
		}
		vector<int> dist = dijkstra(graph, s, 2 * inf).first;
		if (dist[t] == 2 * inf)
			printf("Case #%d: unreachable\n", X);
		else
			printf("Case #%d: %d\n", X, dist[t]);
	}
}
