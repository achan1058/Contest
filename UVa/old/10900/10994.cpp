#include <bits/stdc++.h>
#include "header.h"

ll sum(int n) {
	ll ans = 0;
	while (n > 0) {
		ans += (n % 10) * (n % 10 + 1) / 2;
		n /= 10;
		ans += 45ll * n;
	}
	return ans;
}

int main() {
	int p, q;
	while (cin >> p >> q && (p >= 0 || q >= 0))
		printf("%lld\n", sum(q) - sum(p - 1));
}
