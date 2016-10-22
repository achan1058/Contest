#include <bits/stdc++.h>
#include "primes.h"

int main() {
	ll n;
	whileX(cin >> n && n != 0) {
		if (n == 1) {
			printc("2\n");
			X++;
			continue;
		}

		auto primes = tally(factor(n));
		ll ans = 0;
		irep(p, primes) {
			ll add = 1;
			rep(i, 0, p.y)
				add *= p.x;
			ans += add;
		}
		printc("%lld\n", ans + (sz(primes) == 1 ? 1 : 0));
	}
}
