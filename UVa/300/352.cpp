#include <bits/stdc++.h>
#include "utils.h"
#include "floodfill.h"
#include "header.h"

int main() {
	int n;
	dx = dx8;
	dy = dy8;
	whileX(cin >> n) {
		int count = 0;
		vs grid(n);
		read(grid);
		drep(i, j, n, n) {
			if (grid[i][j] == '1') {
				floodfill(grid, i, j, '0');
				count++;
			}
		}
		print("Image number %d contains %d war eagles.", X, count);
	}
}
