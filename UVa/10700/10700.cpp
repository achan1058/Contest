#include <bits/stdc++.h>
#include "header.h"

ll getAns(const vl& nums, const string& ops, bool ismin) {
	int n = sz(nums);
	ll start = ismin ? linf : 0;
	vvl dp = ml(n, n, start);
	rep(i, 0, n)
		dp[i][i] = nums[i];
	// from j to j+k inclusive.
	rep(k, 1, n) {
		rep(j, 0, n - k) {
			dp[j][j + k] = start;

			rep(i, j, j + k) {
				ll val;
				if (ops[i] == '+')
					val = dp[j][i] + dp[i + 1][j + k];
				else
					val = dp[j][i] * dp[i + 1][j + k];
				if (ismin)
					dp[j][j + k] = min(dp[j][j + k], val);
				else
					dp[j][j + k] = max(dp[j][j + k], val);
			}
		}
	}
	return dp[0][n - 1];
}

int main() {
	forX() {
		string s, ops;
		cin >> s;
		stringstream ss(s);
		ll v;
		char c;
		vl nums;
		ss >> v;
		nums.pb(v);
		while (ss >> c >> v) {
			ops.pb(c);
			nums.pb(v);
		}
		print("The maximum and minimum are %lld and %lld.", getAns(nums, ops, false), getAns(nums, ops, true));
	}
}
