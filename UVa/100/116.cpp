#include <bits/stdc++.h>
#include "header.h"

int main() {
	int r, c;
	while (cin >> r >> c) {
		vvi grid = mi(r, c, 0), next = mi(r, c, 0), tally = mi(r, c, inf);
		read(grid);
		rep(i, 0, r)
			tally[i][c - 1] = grid[i][c - 1];
		rrep(j, c - 1, 1) {
			rep(i, 0, r) {
				int i2 = i;
				if (tally[i][j] + grid[i2][j - 1] < tally[i2][j - 1]) {
					tally[i2][j - 1] = tally[i][j] + grid[i2][j - 1];
					next[i2][j - 1] = i;
				}
				i2 = (i + 1) % r;
				if (tally[i][j] + grid[i2][j - 1] < tally[i2][j - 1]) {
					tally[i2][j - 1] = tally[i][j] + grid[i2][j - 1];
					next[i2][j - 1] = i;
				}
				i2 = (i + r - 1) % r;
				if (tally[i][j] + grid[i2][j - 1] < tally[i2][j - 1]) {
					tally[i2][j - 1] = tally[i][j] + grid[i2][j - 1];
					next[i2][j - 1] = i;
				}
			}
		}

		int best = inf, start = 0;
		rep(i, 0, r) {
			if (tally[i][0] < best) {
				best = tally[i][0];
				start = i;
			}
		}
		rep(j, 0, c - 1) {
			printf("%d ", start + 1);
			start = next[start][j];
		}
		printd(start + 1);
		printd(best);
	}
}
