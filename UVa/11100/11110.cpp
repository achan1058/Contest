#include <bits/stdc++.h>
#include "floodfill.h"
#include "header.h"

int main() {
	int n;
	string s;
	while (cin >> n && n != 0) {
		getline(cin, s);
		vvi grid = mi(n, n, 0);
		int r, c;
		rep(i, 1, n) {
			getline(cin, s);
			stringstream ss(s);
			while (ss >> r >> c)
				grid[r - 1][c - 1] = i;
		}

		bool good = true;
		drep(i, j, n, n) {
			if (grid[i][j] >= 0) {
				int t = floodfill(grid, i, j, -1);
				if (t != n) {
					good = false;
					goto end;
				}
			}
		}
	end:;

		print(good ? "good" : "wrong");
	}
}
