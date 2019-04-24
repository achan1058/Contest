#include <bits/stdc++.h>
#include "header.h"

int main() {
	int r, c;
	while (cin >> r >> c && (r | c) != 0) {
		vvi grid = mi(r, c, 0), tally = mi(r, c + 1, 0);
		read(grid);
		rep(i, 0, r) {
			rep(j, 0, c) {
				if (grid[i][j] == 0)
					tally[i][j + 1] = tally[i][j] + 1;
			}
		}

		int best = 0;
		rep(j, 1, c + 1) {
			rep(i1, 0, r) {
				int height = tally[i1][j];
				rep(i2, i1, r) {
					height = min(height, tally[i2][j]);
					best = max(best, height * (i2 - i1 + 1));
				}
			}
		}
		print("%d", best);
	}
}
