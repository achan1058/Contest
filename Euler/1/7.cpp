#include <bits/stdc++.h>
#include "primes.h"

int ans(int n, const vi& primes) {
	return primes[n - 1];
}

int main() {
	vi primes = sieve(110000);
	assert(ans(6, primes) == 13);
	printf("%d\n", ans(10001, primes));
}
