#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	int N, n, b, r1, c1, r2, c2;
	cin >> N;
	rep(X, 0, N) {
		cin >> n >> b;
		vvi grid = mi(n, n, 1);

		rep(k, 0, b) {
			cin >> r1 >> c1 >> r2 >> c2;
			rep(i, r1 - 1, r2) {
				rep(j, c1 - 1, c2)
					grid[i][j] = 0;
			}
		}

		rep(i, 0, n) {
			rep(j, 0, n) {
				if (i != 0 && grid[i][j] != 0)
					grid[i][j] += grid[i - 1][j];
			}
		}
		int mx = 0;
		rep(i, 0, n)
			mx = max(mx, get<0>(largestRectangle(grid[i])));

		printf("%d\n", mx);
	}
}
