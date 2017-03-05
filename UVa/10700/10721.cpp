#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k, m;
	while (cin >> n >> k >> m) {
		vector<vvl> dp = vector<vvl>(n, ml(k, m, 0));
		dp[0][0][0] = 1;
		rep(i, 0, n - 1) {
			drep(j, l, k, m) {
				if (l + 1 < m)
					dp[i + 1][j][l + 1] += dp[i][j][l];
				if (j + 1 < k)
					dp[i + 1][j + 1][0] += dp[i][j][l];
			}
		}

		ll ans = 0;
		rep(l, 0, m)
			ans += dp[n - 1][k - 1][l];
		printf("%lld\n", ans);
	}
}
