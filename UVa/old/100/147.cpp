#include <bits/stdc++.h>
#include "header.h"

int main() {
	double d;
	while (cin >> d && d != 0) {
		int n = 20 * d + eps;
		vl dp(n + 1), money = { 1, 2, 4, 10, 20, 40, 100, 200, 400, 1000, 2000 };
		dp[0] = 1;
		irep(v, money) {
			rep(i, v, n + 1)
				dp[i] += dp[i - v];
		}
		printf("%6.2f%17lld\n", d, dp[n]);
	}
}
