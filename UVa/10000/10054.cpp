#include <bits/stdc++.h>
#include "eularian.h"

int main() {
	int n, u, v;
	forX() {
		cin >> n;
		vvi graph = mi(51, 51, 0);
		rep(i, 0, n) {
			cin >> u >> v;
			graph[u][v]++;
			graph[v][u]++;
		}

		vi path = eularianPath(graph);
		printX("Case #%d\n", X);
		if (sz(path) != n + 1 || path[0] != path.back())
			printf("some beads may be lost\n", X);
		else {
			rep(i, 1, sz(path))
				printf("%d %d\n", path[i - 1], path[i]);
		}
	}
}
