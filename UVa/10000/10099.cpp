#include <bits/stdc++.h>
#include "shortest_path.h"

int main() {
	int n, e, v1, v2, cost;
	whileX(cin >> n >> e && (n | e) != 0) {
		vvi graph = mi(n, n, 0);
		rep(i, 0, e) {
			cin >> v1 >> v2 >> cost;
			graph[v1 - 1][v2 - 1] = -cost;
			graph[v2 - 1][v1 - 1] = -cost;
		}
		vvi result = floydWarshall(graph, 0, true).x;
		cin >> v1 >> v2 >> cost;
		printf("Scenario #%d\n", X);
		printf("Minimum Number of Trips = %d\n\n", (cost - 1) / (-result[v1 - 1][v2 - 1] - 1) + 1);
	}
}
