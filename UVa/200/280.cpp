#include <bits/stdc++.h>
#include "shortest_path.h"

int main() {
	int n, v1, v2;
	while (cin >> n && n != 0) {
		vvi graph = mi(n, n, inf);
		while (cin >> v1 && v1 != 0) {
			while (cin >> v2 && v2 != 0)
				graph[v1 - 1][v2 - 1] = 1;
		}

		vvi dist = floydWarshall(graph).x;
		int num_q, q;
		cin >> num_q;

		rep(i, 0, num_q) {
			cin >> q;
			vi unreach;

			rep(j, 0, n) {
				if (dist[q - 1][j] == inf)
					unreach.pb(j);
			}

			printf("%d", sz(unreach));
			fori(v, unreach)
				printf(" %d", v + 1);
			printf("\n");
		}
	}
}
