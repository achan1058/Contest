#include <bits/stdc++.h>
#include "header.h"

inline int compute(const vvi& dp, const vi& nums, const vi& total, int L, int R, int root) {
	int ans = total[R + 1] - total[L] - nums[root];
	if (root > L) ans += dp[L][root - 1];
	if (root < R) ans += dp[root + 1][R];
	return ans;
}

int main() {
	int n;
	while (cin >> n) {
		vi nums(n), total(n + 1);
		rep(i, 0, n) {
			cin >> nums[i];
			total[i + 1] = total[i] + nums[i];
		}

		vvi dp = mi(n, n, inf), root = mi(n, n, inf);
		rep(i, 0, n) {
			dp[i][i] = 0;
			root[i][i] = i;
		}
		// i to i + j
		rep(j, 1, n) {
			rep(i, 0, n - j) {
				dp[i][i + j] = inf;
				rep(k, root[i][i + j - 1], root[i + 1][i + j] + 1) {
					int cur = compute(dp, nums, total, i, i + j, k);
					if (cur < dp[i][i + j]) {
						dp[i][i + j] = cur;
						root[i][i + j] = k;
					}
				}
			}
		}
		printf("%d\n", dp[0][n - 1]);
	}
}
