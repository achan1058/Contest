#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int X = 1;
	ll n;
	while (cin >> n && n != 0) {
		if (n == 1) {
			printf("Case %d: 2\n", X);
			X++;
			continue;
		}

		auto primes = tally(factor(n));
		ll ans = 0;
		fori(p, primes) {
			ll add = 1;
			rep(i, 0, p.y)
				add *= p.x;
			ans += add;
		}
		printf("Case %d: %lld\n", X, ans + (sz(primes) == 1 ? 1 : 0));
		X++;
	}
}
