#include <bits/stdc++.h>
#include "max_flow.h"

int main() {
	int n, v1, v2, f, e, b, d;
	while (cin >> n) {
		vvi graph = mi(2 * n + 2, 2 * n + 2, 0);
		for (int i = 1; i <= n; i++) {
			cin >> f;
			graph[2 * i - 1][2 * i] = f;
		}
		cin >> e;
		for (int i = 0; i < e; i++) {
			cin >> v1 >> v2 >> f;
			graph[2 * v1][2 * v2 - 1] = f;
		}
		cin >> b >> d;
		for (int i = 0; i < b; i++) {
			cin >> v1;
			graph[0][2 * v1 - 1] = inf;
		}
		for (int i = 0; i < d; i++) {
			cin >> v2;
			graph[2 * v2][2 * n + 1] = inf;
		}

		printf("%d\n", get<0>(pushRelabel(graph, 0, 2 * n + 1)));
	}
}
