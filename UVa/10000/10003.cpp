#include <bits/stdc++.h>
#include "header.h"

int main() {
	int l, n;
	while (cin >> l && l != 0) {
		cin >> n;
		vi cuts(n + 2);
		cuts[n + 1] = l;
		rep(i, 1, n + 1)
			cin >> cuts[i];
		vvi dp = mi(n + 1, n + 1, inf);
		rep(i, 0, n + 1)
			dp[i][i] = 0;
		rrep(i, n, 0) {
			rep(j, i + 1, n + 1) {
				rep(k, i, j)
					dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + cuts[j + 1] - cuts[i]);
			}
		}
		print("The minimum cutting is %d.", dp[0][n]);
	}
}
