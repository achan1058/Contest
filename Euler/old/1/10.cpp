#include <bits/stdc++.h>
#include "primes.h"

ll ans(int n, const vi& primes) {
	ll result = 0;
	irep(p, primes) {
		if (p > n)
			break;
		result += p;
	}
	return result;
}

int main() {
	vi primes = sieve(2000000);
	assert(ans(10, primes) == 17);
	printf("%lld\n", ans(2000000, primes));
}
