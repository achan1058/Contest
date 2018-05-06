#include <bits/stdc++.h>
#include "utils.h"
#include "floodfill.h"
#include "header.h"

int main() {
	int r, c;
	dx = dx8;
	dy = dy8;
	while (cin >> r >> c && (r | c) != 0) {
		int count = 0;
		vs grid(r);
		read(grid);
		drep(i, j, r, c) {
			if (grid[i][j] == '@') {
				floodfill(grid, i, j, '*');
				count++;
			}
		}
		print("%d", count);
	}
}
