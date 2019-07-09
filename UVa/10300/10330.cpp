#include <bits/stdc++.h>
#include "max_flow.h"
#include "header.h"

int main() {
	int n, e, v1, v2, w, b, d;
	while (cin >> n) {
		vvi graph = mi(2 * n + 2, 2 * n + 2, 0);
		rep(i, 0, n) {
			cin >> w;
			graph[2 * i][2 * i + 1] = w;
		}
		cin >> e;
		rep(i, 0, e) {
			cin >> v1 >> v2 >> w;
			graph[2 * v1 - 1][2 * v2 - 2] = w;
		}
		cin >> b >> d;
		rep(i, 0, b) {
			cin >> v1;
			graph[2 * n][2 * v1 - 2] = inf;
		}
		rep(i, 0, d) {
			cin >> v2;
			graph[2 * v2 - 1][2 * n + 1] = inf;
		}
		print(get<0>(pushRelabel(graph, 2 * n, 2 * n + 1)));
	}
}
