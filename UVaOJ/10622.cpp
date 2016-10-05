#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<ll, int> powers;
	rep(i, 2, 100000) {
		ll cur = i;
		int p = 1;
		while (cur <= 3000000000ll) {
			cur *= i;
			p++;
			powers[cur] = max(powers[cur], p);
		}
	}
	ll n;
	while (cin >> n && n != 0) {
		int ans = powers[abs(n)];
		if (ans == 0)
			ans = 1;
		while (n < 0 && ans % 2 == 0)
			ans /= 2;
		printf("%d\n", ans);
	}
}
