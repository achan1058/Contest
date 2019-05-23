#include <bits/stdc++.h>
#include "floodfill.h"
#include "header.h"

int main() {
	forX() {
		int n, ans = 0;
		cin >> n;
		vs grid(n);
		read(grid);
		drep(i, j, n, sz(grid[0])) {
			if (grid[i][j] == 'x') {
				floodfill(grid, i, j, '.', false);
				ans++;
			}
		}
		printc("%d", ans);
	}
}
