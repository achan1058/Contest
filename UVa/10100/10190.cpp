#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k;
	while (cin >> n >> k) {
		if (n < 2 || k < 2) {
			print("Boring!");
			continue;
		}
		vi ans = { n };
		while (ans.back() != 1 && ans.back() % k == 0)
			ans.pb(ans.back() / k);
		if (ans.back() != 1) {
			print("Boring!");
			continue;
		}
		rep(i, 0, sz(ans))
			printf("%d%c", ans[i], i == sz(ans) - 1 ? '\n' : ' ');
	}
}
