#include <bits/stdc++.h>
#include "header.h"

int main() {
	int T, d, n, v;
	cin >> T;
	rep(X, 0, T) {
		cin >> d >> n;
		vb dp(d + 1);
		dp[0] = true;
		rep(i, 0, n) {
			cin >> v;
			rrep(k, d, v) {
				dp[k] = dp[k] || dp[k - v];
			}
		}

		printf("%s\n", dp[d] ? "YES" : "NO");
	}
}
