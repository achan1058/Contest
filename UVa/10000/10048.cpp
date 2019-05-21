#include <bits/stdc++.h>
#include "shortest_path.h"
#include "header.h"

int main() {
	int n, m, k;
	whileX(cin >> n >> m >> k && (n | m | k) != 0) {
		int v1, v2, v;
		vvi grid = mi(n, n, inf);
		rep(i, 0, m) {
			cin >> v1 >> v2 >> v;
			grid[v1 - 1][v2 - 1] = v;
			grid[v2 - 1][v1 - 1] = v;
		}

		vvi dist = floyd(grid, true).f;
		printX("Case #%d\n", X);
		rep(i, 0, k) {
			cin >> v1 >> v2;
			if (dist[v1 - 1][v2 - 1] == inf)
				print("no path");
			else
				print("%d", dist[v1 - 1][v2 - 1]);
		}
	}
}
