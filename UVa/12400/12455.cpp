#include <bits/stdc++.h>
#include "header.h"

int main() {
	int d, n, v;
	forX() {
		cin >> d >> n;
		vb dp(d + 1);
		dp[0] = true;
		rep(i, 0, n) {
			cin >> v;
			rrep(k, d, v)
				dp[k] = dp[k] || dp[k - v];
		}

		printf("%s\n", dp[d] ? "YES" : "NO");
	}
}
