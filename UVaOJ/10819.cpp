#include <bits/stdc++.h>
#include "header.h"

int main() {
	int m, n;
	while (cin >> m >> n) {
		vi cost(n), value(n);
		for (int i = 0; i < n; i++)
			cin >> cost[i] >> value[i];

		vi dp(m + 201, -inf);
		dp[0] = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = m + 200; j >= cost[i - 1]; j--)
				dp[j] = max(dp[j], dp[j - cost[i - 1]] + value[i - 1]);
		}

		for (int j = 1801; j <= m; j++)
			dp[j] = max(dp[j], dp[j + 200]);
		for (int j = 1; j <= m; j++)
			dp[j] = max(dp[j - 1], dp[j]);
		printf("%d\n", dp[m]);
	}
}
