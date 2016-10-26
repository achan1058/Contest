#include <bits/stdc++.h>
#include "shortest_path.h"

int main() {
	int n, e, q, v1, v2, d;
	whileX(cin >> n >> e >> q && (n | q | e) != 0) {
		vvi graph = mi(n, n, inf);
		rep(i, 0, e) {
			cin >> v1 >> v2 >> d;
			graph[v1 - 1][v2 - 1] = d;
			graph[v2 - 1][v1 - 1] = d;
		}
		
		vvi dist = floydWarshall(graph, inf, true).x;
		printX("Case #%d\n", X);
		for (int i = 0; i < q; i++) {
			cin >> v1 >> v2;
			if (dist[v1 - 1][v2 - 1] == inf)
				printf("no path\n");
			else
				printf("%d\n", dist[v1 - 1][v2 - 1]);
		}
	}
}
