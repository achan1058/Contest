#include <bits/stdc++.h>
#include "shortest_path.h"
#include "header.h"

int main() {
	int n, e;
	whileX(cin >> n >> e && (n | e) != 0) {
		int u, v, c;
		vvi graph = mi(n, n, inf);
		rep(i, 0, e) {
			cin >> u >> v >> c;
			graph[u - 1][v - 1] = -c + 1;
			graph[v - 1][u - 1] = -c + 1;
		}
		
		cin >> u >> v >> c;
		int cap = -floydWarshall(graph, true).first[u - 1][v - 1];
		printf("Scenario #%d\n", X);
		printf("Minimum Number of Trips = %d\n\n", (c + cap - 1) / cap);
	}
}
