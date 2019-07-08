#include <bits/stdc++.h>
#include "floodfill.h"
#include "utils.h"
#include "header.h"

int main() {
	string s;
	dx = dx8;
	dy = dy8;
	forX(true) {
		vs grid;
		while (getline(cin, s) && s != "")
			grid.pb(s);

		int ans = 0;
		drep(i, j, sz(grid), sz(grid[0])) {
			if (grid[i][j] == '1')
				ans = max(ans, floodfill(grid, i, j, '0'));
		}

		printX(ans);
	}
}
