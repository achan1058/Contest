#include <bits/stdc++.h>
#include "header.h"

int main() {
	int T, k, n;
	cin >> T;
	for (int X = 0; X < T; X++) {
		cin >> k >> n;
		vi lengths(n);
		irep(v, lengths)
			cin >> v;

		reverse(all(lengths));
		vvi dp = mi(k + 9, n + 1, inf);
		dp[0] = vi(n + 1, 0);

		for (int i = 1; i <= k + 8; i++) {
			for (int j = 3 * i; j <= n; j++)
				dp[i][j] = min(dp[i][j], min(dp[i][j - 1], dp[i - 1][j - 2] + (lengths[j - 1] - lengths[j - 2]) * (lengths[j - 1] - lengths[j - 2])));
		}

		printf("%d\n", dp[k + 8][n]);
	}
}
