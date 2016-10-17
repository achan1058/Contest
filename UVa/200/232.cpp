#include <bits/stdc++.h>
#include "header.h"

int main() {
	int r, c, X = 1;
	while (cin >> r >> c && r != 0) {
		vs grid(r);
		vvi num = mi(r, c, 0);
		int cur = 1;
		rep(i, 0, r) {
			cin >> grid[i];
			rep(j, 0, c) {
				if (grid[i][j] != '*' && (i == 0 || j == 0 || grid[i - 1][j] == '*' || grid[i][j - 1] == '*')) {
					num[i][j] = cur;
					cur++;
				}
			}
		}

		printf("%spuzzle #%d:\n", X > 1 ? "\n" : "", X);
		printf("Across\n");
		rep(i, 0, r) {
			rep(j, 0, c) {
				if (grid[i][j] != '*' && (j == 0 || grid[i][j - 1] == '*')) {
					printf("%*d.", 3, num[i][j]);
					for (int j2 = j; j2 < c && grid[i][j2] != '*'; j2++)
						printf("%c", grid[i][j2]);
					printf("\n");
				}
			}
		}
		printf("Down\n");
		rep(i, 0, r) {
			rep(j, 0, c) {
				if (grid[i][j] != '*' && (i == 0 || grid[i - 1][j] == '*')) {
					printf("%*d.", 3, num[i][j]);
					for (int i2 = i; i2 < r && grid[i2][j] != '*'; i2++)
						printf("%c", grid[i2][j]);
					printf("\n");
				}
			}
		}
		X++;
	}
}
