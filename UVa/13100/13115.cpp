#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	forX() {
		cin >> n;
		int t = sqrt(n);
		vvi grid = mi(n, n, 0);
		int distinct = 0;
		irep(g, grid) {
			read(g);
			vb used(n);
			irep(v, g) {
				if (!used[v - 1]) {
					distinct++;
					used[v - 1] = true;
				}
			}
		}

		rep(j, 0, n) {
			vb used(n);
			rep(i, 0, n) {
				if (!used[grid[i][j]]) {
					distinct++;
					used[grid[i][j]] = true;
				}
			}
		}

		drep(i1, j1, t, t) {
			vb used(n);
			drep(i2, j2, t, t) {
				if (!used[grid[i1 * t + i2][j1 * t + j2]]) {
					distinct++;
					used[grid[i1 * t + i2][j1 * t + j2]] = true;
				}
			}
		}

		printf("%s\n", distinct == 3 * n * n ? "yes" : "no");
	}
}
