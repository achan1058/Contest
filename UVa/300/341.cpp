#include <bits/stdc++.h>
#include "shortest_path.h"

int main() {
	int n, r, v, d, X = 1;
	while (cin >> n && n != 0) {
		vvi grid = mi(n, n, inf);
		rep(i, 0, n) {
			cin >> r;
			rep(j, 0, r) {
				cin >> v >> d;
				grid[i][v - 1] = d;
			}
		}

		pair<vvi, vvi> dist = floydWarshall(grid);
		cin >> r >> v;
		vi path = getPath(dist.y[r - 1], r - 1, v - 1);
		printc("Path =");
		irep(p, path)
			printf(" %d", p + 1);
		printf("; %d second delay\n", dist.x[r - 1][v - 1]);
		X++;
	}
}
