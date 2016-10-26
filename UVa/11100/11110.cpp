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
		drep(i, j, n, n) {
			if (grid[i][j] != 0 && floodfill(grid, i, j, 0) != n) {
				good = false;
				break;
			}
		}
		printf("%s\n", good ? "good" : "wrong");
	}
}
