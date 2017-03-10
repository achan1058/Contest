#include <bits/stdc++.h>
#include "shortest_path.h"
#include "header.h"

int main() {
	int n, e, q;
	whileX(cin >> n >> e >> q && (n | e | q) != 0) {
		int u, v, c;
		vvi graph = mi(n, n, inf);
		rep(i, 0, e) {
			cin >> u >> v >> c;
			graph[u - 1][v - 1] = c;
			graph[v - 1][u - 1] = c;
		}
		
		vvi dist = floydWarshall(graph, true).first;
		printX("Case #%d\n", X);
		rep(i, 0, q) {
			cin >> u >> v;
			if (dist[u - 1][v - 1] == inf)
				printf("no path\n");
			else
				printf("%d\n", dist[u - 1][v - 1]);
		}
	}
}
