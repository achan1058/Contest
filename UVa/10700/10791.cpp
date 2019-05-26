#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	ll n;
	whileX(cin >> n && n != 0) {
		ll ans = 0;
		auto primes = tally(factor(n));
		irep(p, primes) {
			ll d = 1;
			rep(i, 0, p.second)
				d *= p.first;
			ans += d;
		}
		if (ans == 0)
			ans = 2;
		if (sz(primes) == 1)
			ans++;
		printc("%lld", ans);
	}
}
