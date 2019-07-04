#include <bits/stdc++.h>
#include "header.h"

int r, c;
bool isHor(const vs& grid, int i, int j) {
	return j == 0 || grid[i][j - 1] == '*';
}

bool isVer(const vs& grid, int i, int j) {
	return i == 0 || grid[i - 1][j] == '*';
}

int main() {
	whileX(cin >> r >> c && r != 0) {
		vs grid(r);
		vvi mark = mi(r, c, 0);
		int t = 1;
		read(grid);
		drep(i, j, r, c) {
			if (grid[i][j] != '*' && (isHor(grid, i, j) || isVer(grid, i, j))) {
				mark[i][j] = t;
				t++;
			}
		}

		printX("puzzle #%d:", X);
		print("Across");
		drep(i, j, r, c) {
			if (mark[i][j] > 0 && isHor(grid, i, j)) {
				printf("%3d.", mark[i][j]);
				rep(j2, j, c) {
					if (grid[i][j2] == '*')
						break;
					printv(grid[i][j2]);
				}
				print();
			}
		}

		print("Down");
		drep(i, j, r, c) {
			if (mark[i][j] > 0 && isVer(grid, i, j)) {
				printf("%3d.", mark[i][j]);
				rep(i2, i, r) {
					if (grid[i2][j] == '*')
						break;
					printv(grid[i2][j]);
				}
				print();
			}
		}
	}
}
