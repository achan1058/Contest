#include <bits/stdc++.h>
#include "floodfill.h"
#include "header.h"

int main() {
	int r, c;
	while (cin >> r >> c && (r | c) != 0) {
		vvi grid = mi(r, c, inf);
		int n, x, t, y;
		cin >> n;
		rep(i, 0, n) {
			cin >> x >> t;
			rep(j, 0, t) {
				cin >> y;
				grid[x][y] = -1;
			}
		}
		cin >> x >> y;
		flooddist(grid, x, y);
		cin >> x >> y;
		printf("%d\n", grid[x][y]);
	}
}
