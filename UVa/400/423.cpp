#include <bits/stdc++.h>
#include "shortest_path.h"

int main() {
	int n;
	string s;
	while (cin >> n) {
		AdjList<int> graph(n);
		for (int i = 1; i < n; i++) {
			for (int j = 0; j < i; j++) {
				cin >> s;
				if (s != "x") {
					graph.push(i, j, stoi(s));
					graph.push(j, i, stoi(s));
				}
			}
		}

		vi dist = dijkstra(graph, 0).first;
		int ans = 0;
		for (int i = 1; i < n; i++)
			ans = max(ans, dist[i]);
		printf("%d\n", ans);
	}
}
