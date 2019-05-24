#include <bits/stdc++.h>
#include "utils.h"
#include "floodfill.h"
#include "header.h"

int main() {
	dx = dx8;
	dy = dy8;
	int r, c;
	while (cin >> r >> c && (r | c) != 0) {
		vs grid(r);
		read(grid);
		int ans = 0;

		drep(i, j, r, c) {
			if (grid[i][j] == '*') {
				if (floodfill(grid, i, j, '.') == 1)
					ans++;
			}
		}
		print("%d", ans);
	}
}
