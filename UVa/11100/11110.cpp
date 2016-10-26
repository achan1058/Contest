#include <bits/stdc++.h>
#include "floodfill.h"

int main() {
	int n, r, c;
	string s;
	while (cin >> n && n != 0) {
		getline(cin, s);
		vvi grid = mi(n, n, n);
		rep(i, 1, n) {
			getline(cin, s);
			stringstream ss(s);
			while(ss >> r >> c)
				grid[r - 1][c - 1] = i;
		}
		bool good = true;
		vb used(n);
		drep(i, j, n, n) {
			if (grid[i][j] == 0)
				continue;
			int color = grid[i][j] - 1;
			if (used[color] || floodfill(grid, i, j, 0) != n) {
				good = false;
				break;
			}
			used[color] = true;
		}
		printf("%s\n", good ? "good" : "wrong");
	}
}
