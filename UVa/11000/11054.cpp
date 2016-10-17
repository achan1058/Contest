#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		ll v, ans = 0, total = 0;
		rep(i, 0, n) {
			cin >> v;
			total += v;
			ans += abs(total);
		}
		printf("%lld\n", ans);
	}
}
