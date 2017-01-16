#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, v;
	vvl ans = ml(1001, 1001, 0);
	rep(i, 0, 1001) {
		ans[0][i] = 1;
		ans[i][0] = 1 - i % 2;
	}
	rep(i, 1, 1001) {
		rep(j, 1, 1001)
			ans[i][j] = ans[i - 1][j] + ans[i][j - 1];
	}
	while (cin >> n >> v && (n | v) != 0)
		printf("%lld\n", ans[n][v]);
}
