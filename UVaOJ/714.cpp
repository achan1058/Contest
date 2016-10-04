#include <bits/stdc++.h>
#include "header.h"

int main() {
	int T, k, n;
	cin >> T;
	for (int X = 0; X < T; X++) {
		cin >> n >> k;
		vl lengths(n);
		vl sumlen(n + 1);

		for (int i = 0; i < n; i++) {
			cin >> lengths[i];
			sumlen[i + 1] = sumlen[i] + lengths[i];
		}

		vvl dp = ml(k + 1, n + 1, inf);
		dp[0][0] = 0;

		for (int i = 1; i <= k; i++) {
			for (int j = 0; j <= n; j++) {
				for (int l = 0; l < j; l++)
					dp[i][j] = min(dp[i][j], max(dp[i - 1][l], sumlen[j] - sumlen[l]));
			}
		}

		ll cur = lengths[n - 1], remain = k - 1;
		vvl ans;
		ans.push_back({ lengths[n - 1] });
		for (int i = n - 2; i >= 0; i--) {
			if (cur + lengths[i] <= dp[k][n] && i >= remain) {
				ans.back().push_back(lengths[i]);
				cur += lengths[i];
			} else {
				ans.push_back({ lengths[i] });
				cur = lengths[i];
				remain--;
			}
		}

		for (int i = sz(ans) - 1; i >= 0; i--) {
			for (int j = sz(ans[i]) - 1; j >= 0; j--) {
				printf("%lld", ans[i][j]);
				if (j > 0)
					printf(" ");
			}
			if (i > 0)
				printf(" / ");
		}
		printf("\n");
	}
}
