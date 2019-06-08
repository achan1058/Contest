#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, n2;
		cin >> n2;
		vvi grid = mi(n2, n2, 0);
		read(grid);
		n = sqrt(n2);

		bool good = true;
		rep(i, 0, n2) {
			vb hit(n2);
			rep(j, 0, n2) {
				if (hit[grid[i][j] - 1]) {
					good = false;
					goto end;
				}
				hit[grid[i][j] - 1] = true;
			}
		}

		rep(j, 0, n2) {
			vb hit(n2);
			rep(i, 0, n2) {
				if (hit[grid[i][j] - 1]) {
					good = false;
					goto end;
				}
				hit[grid[i][j] - 1] = true;
			}
		}

		drep(i, j, n, n) {
			vb hit(n2);
			drep(i2, j2, n, n) {
				if (hit[grid[i * n + i2][j * n + j2] - 1]) {
					good = false;
					goto end;
				}
				hit[grid[i * n + i2][j * n + j2] - 1] = true;
			}
		}
	end:;
		print(good ? "yes" : "no");
	}
}
