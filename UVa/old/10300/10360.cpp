#include <bits/stdc++.h>
#include "header.h"

int main() {
	int d, n;
	forX() {
		int mx = 0, my = 0, x, y, v;
		vvi grid = mi(1025, 1025, 0);
		cin >> d >> n;
		rep(i, 0, n) {
			cin >> x >> y >> v;
			rep(x1, max(0, x - d), min(1025, x + d + 1)) {
				rep(y1, max(0, y - d), min(1025, y + d + 1))
					grid[x1][y1] += v;
			}
		}

		drep(i, j, 1025, 1025) {
			if (grid[i][j] > grid[mx][my]) {
				mx = i;
				my = j;
			}
		}
		printf("%d %d %d\n", mx, my, grid[mx][my]);
	}
}
