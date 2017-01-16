#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int n, b;
	while (cin >> n >> b) {
		double logans = 0;
		ll digitans = ll(inf) * ll(inf);
		rep(i, 1, n + 1)
			logans += log(i);

		auto primes = tally(factor(b));
		irep(p, primes) {
			int t = n;
			ll numfact = 0;
			while (t > 0) {
				t /= p.first;
				numfact += t;
			}
			digitans = min(digitans, numfact / p.second);
		}

		printf("%lld %lld\n", digitans, ll((logans + eps) / log(b)) + 1);
	}
}
