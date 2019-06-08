#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, v;
	forX() {
		cin >> n;
		vvi grid = mi(n, n + 1, 0);
		vi cols(n + 1);
		int ans = -inf;
		drep(i, j, n, n) {
			cin >> v;
			grid[i][j + 1] = grid[i][j] + v;
			cols[j + 1] += v;
			ans = max(ans, v);
		}
		if (ans <= 0) {
			printd(ans);
			continue;
		}
		rep(j, 0, n)
			cols[j + 1] += cols[j];
		drep(j1, j2, n + 1, j1) {
			int M1 = 0, M2 = 0, m1 = 0, m2 = 0;
			rep(i, 0, n) {
				M1 += grid[i][j1] - grid[i][j2];
				M2 += grid[i][n] - grid[i][j1] + grid[i][j2];
				m1 += grid[i][j1] - grid[i][j2];
				m2 += grid[i][n] - grid[i][j1] + grid[i][j2];
				M1 = max(0, M1);
				M2 = max(0, M2);
				m1 = min(0, m1);
				m2 = min(0, m2);
				ans = max(ans, M1);
				ans = max(ans, M2);
				ans = max(ans, cols[j1] - cols[j2] - m1);
				ans = max(ans, cols[n] - cols[j1] + cols[j2] - m2);
			}
		}
		printd(ans);
	}
}
