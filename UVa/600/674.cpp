#include <bits/stdc++.h>
#include "header.h"

int main() {
	vl ans(7490);
	vi coins = { 1, 5, 10, 25, 50 };
	ans[0] = 1;
	irep(c, coins) {
		rep(j, c, 7490)
			ans[j] += ans[j - c];
	}

	int v;
	while (cin >> v)
		print("%lld", ans[v]);
}
