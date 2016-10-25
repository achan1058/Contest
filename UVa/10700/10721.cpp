#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k, m;
	while (cin >> n >> k >> m) {
		vvl ans = ml(k + 1, n + m + 1, 0);
		ans[0][0] = 1;
		drep(i, j, k, n) {
			rep(t, 1, m + 1)
				ans[i + 1][j + t] += ans[i][j];
		}

		printf("%lld\n", ans[k][n]);
	}
}
