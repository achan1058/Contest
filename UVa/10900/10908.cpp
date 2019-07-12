#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int r, c, n, x, y;
		cin >> r >> c >> n;
		vs grid(r);
		read(grid);
		print(r, c, n);
		rep(i, 0, n) {
			cin >> x >> y;
			int t = 0;
			for (; x - t >= 0 && x + t < r && y - t >= 0 && y + t < c; t++) {
				bool good = true;
				rep(k, x - t, x + t + 1) {
					good = good && grid[k][y - t] == grid[x][y];
					good = good && grid[k][y + t] == grid[x][y];
				}
				rep(k, y - t, y + t + 1) {
					good = good && grid[x - t][k] == grid[x][y];
					good = good && grid[x + t][k] == grid[x][y];
				}
				if (!good)
					break;
			}
			print(2 * t - 1);
		}
	}
}
