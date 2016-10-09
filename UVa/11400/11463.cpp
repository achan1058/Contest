#include <bits/stdc++.h>
#include "shortest_path.h"

int main() {
	int N, n, e, v1, v2;
	cin >> N;
	rep(X, 1, N + 1) {
		cin >> n >> e;
		vvi graph = mi(n, n, inf);
		rep(i, 0, n)
			graph[i][i] = 0;
		rep(i, 0, e) {
			cin >> v1 >> v2;
			graph[v1][v2] = graph[v2][v1] = 1;
		}

		vvi dist = floydWarshall(graph).x;
		int ans = 0;

		cin >> v1 >> v2;
		rep(i, 0, n)
			ans = max(ans, dist[v1][i] + dist[i][v2]);
		printf("Case %d: %d\n", X, ans);
	}
}
