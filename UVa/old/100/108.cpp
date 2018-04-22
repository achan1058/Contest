#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		vvi grid = mi(n, n, 0);
		read(grid);
		irep(v, grid) {
			v.push_back(0);
			rrep(j, n - 1, 0)
				v[j] += v[j + 1];
		}

		int mx = -inf;
		drep(j, i, n + 1, j) {
			int tally = 0;
			rep(k, 0, n) {
				tally += grid[k][i] - grid[k][j];
				mx = max(mx, tally);
				tally = max(tally, 0);
			}
		}

		printf("%d\n", mx);
	}
}
