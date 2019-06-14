#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, v, total = 0, out = inf;
	cin >> n;
	vi coins(n);
	rep(i, 0, n) {
		cin >> v;
		coins[i] = v;
		total += v;
	}
	vi ans(total + 1, inf);
	ans[0] = 0;
	irep(c, coins) {
		rrep(j, total, c)
			ans[j] = min(ans[j], ans[j - c] + 1);
	}
	rep(i, total / 2 + 1, total + 1)
		out = min(out, ans[i]);
	print(out);
}
