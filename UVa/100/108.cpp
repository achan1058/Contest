#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, ans = -inf;
	cin >> n;
	vvi grid = mi(n, n, 0), tally = mi(n, n + 1, 0);
	read(grid);
	drep(i, j, n, n) {
		tally[i][j + 1] = tally[i][j] + grid[i][j];
	}
	drep(j1, j2, n + 1, j1) {
		int cur = 0;
		rep(i, 0, n) {
			cur += tally[i][j1] - tally[i][j2];
			ans = max(ans, cur);
			cur = max(0, cur);
		}
	}
	printv(ans);
}
