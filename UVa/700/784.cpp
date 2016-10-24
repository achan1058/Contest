#include <bits/stdc++.h>
#include "floodfill.h"

int main() {
	string s;
	forX() {
		vs grid;
		while (getline(cin, s) && s[0] != '_')
			grid.push_back(s);

		grid.push_back(s);
		drep(i, j, sz(grid), sz(grid[i])) {
			if (grid[i][j] == '*') {
				grid[i][j] = ' ';
				floodfill(grid, i, j, '#');
				break;
			}
		}
		rep(i, 0, sz(grid))
			printf("%s\n", grid[i].c_str());
	}
}
