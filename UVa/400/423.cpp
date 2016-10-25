#include <bits/stdc++.h>
#include "shortest_path.h"

int main() {
	int n;
	string s;
	while (cin >> n) {
		vvp<int> graph(n);
		drep(i, j, n, i) {
			cin >> s;
			if (s != "x") {
				graph[i].pb({ j, stoi(s) });
				graph[j].pb({ i, stoi(s) });
			}
		}

		vi dist = dijkstra(graph, 0).first;
		int ans = 0;
		for (int i = 1; i < n; i++)
			ans = max(ans, dist[i]);
		printf("%d\n", ans);
	}
}
