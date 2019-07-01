#include <bits/stdc++.h>
#include "header.h"

vi cur = { 1, 2, 4, 10, 20, 40 };
int main() {
	vi nums(6);
	double d;
	while (read(nums) && (nums[0] | nums[1] | nums[2] | nums[3] | nums[4] | nums[5]) != 0) {
		cin >> d;
		int t = 20 * d + eps;
		vi dp(t + 41, inf);
		dp[0] = 0;

		rep(i, 0, 6) {
			rrep(j, t + 40, 0) {
				rep(k, 0, nums[i] + 1) {
					if (j + cur[i] * k > t + 40)
						break;
					dp[j + cur[i] * k] = min(dp[j + cur[i] * k], dp[j] + k);
				}
			}
		}
		rep(i, 0, 6) {
			rrep(j, t + 40, cur[i])
				dp[j - cur[i]] = min(dp[j - cur[i]], dp[j] + 1);
		}
		print("%3d", dp[t]);
	}
}
