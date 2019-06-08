#include <bits/stdc++.h>
#include "dp_algs.h"
#include "header.h"

int main() {
	int r, c;
	while (cin >> r >> c && (r | c) != 0) {
		vvi grid = mi(r, c, 0);
		read(grid);
		drep(i, j, r, c) {
			if (i == 0)
				grid[0][j] = 1 - grid[i][j];
			else if (grid[i][j] == 1)
				grid[i][j] = 0;
			else
				grid[i][j] = grid[i - 1][j] + 1;
		}

		int best = 0;
		rep(i, 0, r)
			best = max(best, get<0>(largestRectangle(grid[i])));
		print(best);
	}
}
