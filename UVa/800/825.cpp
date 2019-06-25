#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	int r, c;
	forX() {
		cin >> r >> c;
		getline(cin, s);
		vvi grid = mi(r + 1, c + 1, 0);
		grid[0][1] = 1;
		rep(i, 0, r) {
			int x, y;
			getline(cin, s);
			stringstream ss(s);
			ss >> x;
			while (ss >> y)
				grid[x][y] = -1;
		}

		rep(i, 1, r + 1) {
			rep(j, 1, c + 1)
				grid[i][j] = grid[i][j] == -1 ? 0 : grid[i - 1][j] + grid[i][j - 1];
		}
		printX(grid[r][c]);
	}
}
