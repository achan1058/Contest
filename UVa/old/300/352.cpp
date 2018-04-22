#include <bits/stdc++.h>
#include "floodfill.h"
#include "header.h"

int main() {
	dx = { 1, 1, 1, 0, -1, -1, -1, 0 };
	dy = { 1, 0, -1, -1, -1, 0, 1, 1 };
	int n;
	whileX(cin >> n) {
		int ans = 0;
		vs grid(n);
		read(grid);
		drep(i, j, n, n) {
			if (grid[i][j] == '1') {
				floodfill(grid, i, j, '0');
				ans++;
			}
		}
		printf("Image number %d contains %d war eagles.\n", X, ans);
	}
}
