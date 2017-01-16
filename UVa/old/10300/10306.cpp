#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, s;
	forX() {
		cin >> n >> s;
		vvi dp = mi(s + 1, s + 1, inf);
		vector<pii> coins(n);
		int mn = inf;
		irep(c, coins)
			cin >> c.x >> c.y;

		dp[0][0] = 0;
		drep(i, j, s + 1, s + 1) {
			if (i * i + j * j == s * s)
				mn = min(mn, dp[i][j]);
			if (i * i + j * j >= s * s)
				continue;
			irep(c, coins) {
				if (i + c.x > s || j + c.y > s)
					continue;
				dp[i + c.x][j + c.y] = min(dp[i + c.x][j + c.y], dp[i][j] + 1);
			}
		}

		if (mn == inf)
			printf("not possible\n");
		else
			printf("%d\n", mn);
	}
}
