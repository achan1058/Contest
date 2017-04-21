#include <bits/stdc++.h>
#include "dp_algs.h"
#include "header.h"

int main() {
	int r, c;
	while (cin >> r >> c && (r | c) != 0) {
		vvi grid = mi(r, c, 0);
		read(grid);
		drep(i, j, r, c) {
			grid[i][j] = 1 - grid[i][j];
			if (i > 0 && grid[i][j] != 0)
				grid[i][j] += grid[i - 1][j];
		}
		int best = 0;
		irep(v, grid)
			best = max(best, get<0>(largestRectangle(v)));
		printf("%d\n", best);
	}
}
