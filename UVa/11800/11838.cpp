#include <bits/stdc++.h>
#include "components.h"

int main() {
	int n, v1, v2, e, dir;
	while (cin >> n >> e && (n | e) != 0) {
		vvi graph(n);
		for (int i = 0; i < e; i++) {
			cin >> v1 >> v2 >> dir;
			graph[v1 - 1].pb(v2 - 1);
			if (dir == 2)
				graph[v2 - 1].pb(v1 - 1);
		}

		printf("%d\n", stronglyConnected(graph).x == 1 ? 1 : 0);
	}
}
