#include <bits/stdc++.h>
#include "header.h"

void rotate(vs& grid) {
	int n = sz(grid);
	form(i, j, (n + 1) / 2, n / 2) {
		char c = grid[i][j];
		grid[i][j] = grid[n - j - 1][i];
		grid[n - j - 1][i] = grid[n - i - 1][n - j - 1];
		grid[n - i - 1][n - j - 1] = grid[j][n - i - 1];
		grid[j][n - i - 1] = c;
	}
}

int checkgrid(const vs& biggrid, const vs& smallgrid, int x, int y) {
	int n = sz(smallgrid);
	form(i, j, n, n) {
		if (smallgrid[i][j] != biggrid[i + x][j + y])
			return 0;
	}
	return 1;
}

int main() {
	int x, y;
	whileX(cin >> x >> y && (x | y) != 0) {
		vs biggrid(x), smallgrid(y);
		vi ans(4);
		read(biggrid);
		read(smallgrid);

		forn(k, 4) {
			form(i, j, x - y + 1, x - y + 1)
				ans[k] += checkgrid(biggrid, smallgrid, i, j);

			rotate(smallgrid);
		}
		printf("%d %d %d %d\n", ans[0], ans[1], ans[2], ans[3]);
	}
}
