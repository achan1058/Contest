#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		vvi grid = mi(n, n, 0);
		read(grid);
		printf("Case %d:", X);
		rep(k, 0, n / 2) {
			int ans = grid[k][k] + grid[k][n - k - 1] + grid[n - k - 1][k] + grid[n - k - 1][n - k - 1];
			rep(i, k + 1, n - k - 1) {
				ans += grid[k][i];
				ans += grid[n - k - 1][i];
				ans += grid[i][k];
				ans += grid[i][n - k - 1];
			}
			printf(" %d", ans);
		}

		if (n % 2)
			printf(" %d", grid[n / 2][n / 2]);
		print("");
	}
}
