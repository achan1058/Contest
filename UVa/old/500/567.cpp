#include <bits/stdc++.h>
#include "shortest_path.h"

int main() {
	whileX(true) {
		vvi graph = mi(21, 21, inf);
		int num = 0, t, q, c1, c2;
		rep(i, 1, 20) {
			if (!(cin >> num))
				return 0;
			rep(j, 0, num) {
				cin >> t;
				graph[i][t] = 1;
				graph[t][i] = 1;
			}
		}
		vvi result = floydWarshall(graph).x;
		cin >> q;
		printf("Test Set #%d\n", X);
		rep(i, 0, q) {
			cin >> c1 >> c2;
			printf("%2d to %2d: %d\n", c1, c2, result[c1][c2]);
		}
		printf("\n");
	}
}
