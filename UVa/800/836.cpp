#include <bits/stdc++.h>
#include "dp_algs.h"
#include "header.h"

int main() {
	string s;
	forX() {
		vs grid;
		if (X == 1)
			getline(cin, s);
		while (getline(cin, s) && s != "")
			grid.pb(s);

		int r = sz(grid), c = sz(grid[0]);
		vvi tally = mi(r, c, 0);
		drep(i, j, r, c) {
			if (i == 0)
				tally[0][j] = grid[i][j] - '0';
			else if (grid[i][j] == '0')
				tally[i][j] = 0;
			else
				tally[i][j] = tally[i - 1][j] + 1;
		}

		int best = 0;
		rep(i, 0, r)
			best = max(best, get<0>(largestRectangle(tally[i])));
		printX("%d\n", best);
	}
}
