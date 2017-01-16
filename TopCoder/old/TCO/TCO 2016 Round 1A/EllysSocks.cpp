#include <bits/stdc++.h>
#include "header.h"

class EllysSocks {
public:
	int getDifference(vector<int> S, int P) {
		sort(all(S));
		vvi dp = mi(1100, 510, inf);

		rep(i, 0, sz(S) + 1)
			dp[i][0] = 0;
		rep(i, 1, sz(S)) {
			int diff = S[i] - S[i - 1];
			rep(j, 1, P + 1)
				dp[i + 1][j] = min(dp[i][j], max(dp[i - 1][j - 1], diff));
		}
		return dp[sz(S)][P];
	}
};
