#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		vi nums(n), total(n + 1);
		rep(i, 0, n) {
			cin >> nums[i];
			total[i + 1] = total[i] + nums[i];
		}

		vvi dp = mi(n, n, inf);
		rep(i, 0, n)
			dp[i][i] = 0;
		// i to i + j
		rep(j, 1, n) {
			rep(i, 0, n - j) {
				dp[i][i + j] = dp[i + 1][i + j] + total[i + j + 1] - total[i + 1];
				dp[i][i + j] = min(dp[i][i + j], dp[i][i + j - 1] + total[i + j] - total[i]);
				rep(k, i + 1, i + j)
					dp[i][i + j] = min(dp[i][i + j], dp[i][k - 1] + dp[k + 1][i + j] + total[i + j + 1] - total[i] - nums[k]);
			}
		}
		printf("%d\n", dp[0][n - 1]);
	}
}
