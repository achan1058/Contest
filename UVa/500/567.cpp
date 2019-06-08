#include <bits/stdc++.h>
#include "shortest_path.h"
#include "header.h"

int main() {
	int t, v;
	whileX(cin >> t) {
		vvi graph = mi(20, 20, inf);
		rep(j, 0, t) {
			cin >> v;
			graph[0][v - 1] = graph[v - 1][0] = 1;
		}
		rep(i, 1, 19) {
			cin >> t;
			rep(j, 0, t) {
				cin >> v;
				graph[i][v - 1] = graph[v - 1][i] = 1;
			}
		}
		vvi dist = floyd(graph).first;
		print("Test Set #%d", X);

		int v1, v2;
		cin >> t;
		rep(i, 0, t) {
			cin >> v1 >> v2;
			print("%2d to %2d: %d", v1, v2, dist[v1 - 1][v2 - 1]);
		}
		print();
	}
}
