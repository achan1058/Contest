#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n2;
		cin >> n2;
		int n = sqrt(n2);
		vvi grid = mi(n2, n2, 0);
		read(grid);

		bool good = true;
		rep(i, 0, n2) {
			vb used(n2);
			rep(j, 0, n2) {
				if (used[grid[i][j] - 1]) {
					good = false;
					goto end;
				}
				used[grid[i][j] - 1] = true;
			}
		}

		rep(i, 0, n2) {
			vb used(n2);
			rep(j, 0, n2) {
				if (used[grid[j][i] - 1]) {
					good = false;
					goto end;
				}
				used[grid[j][i] - 1] = true;
			}
		}

		drep(I, J, n, n) {
			vb used(n2);
			drep(i, j, n, n) {
				if (used[grid[n * I + i][n * J + j] - 1]) {
					good = false;
					goto end;
				}
				used[grid[n * I + i][n * J + j] - 1] = true;
			}
		}
	end:;
		printf("%s\n", good ? "yes" : "no");
	}
}
