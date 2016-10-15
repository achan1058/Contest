#include <bits/stdc++.h>
#include "primes.h"

vb smallPrimes(1000, false);
bool isDigitPrime(int n) {
	int r = 0;
	while (n > 0) {
		r += n % 10;
		n /= 10;
	}
	return smallPrimes[r];
}

int main() {
	int N, t1, t2;
	vi primes = sieve(1000000), digitPrimes;
	for (int i = 0; primes[i] < 1000; i++)
		smallPrimes[primes[i]] = true;
	fori(p, primes) {
		if (isDigitPrime(p))
			digitPrimes.pb(p);
	}

	cin >> N;
	rep(X, 0, N) {
		cin >> t1 >> t2;
		auto i1 = lower_bound(all(digitPrimes), t1);
		auto i2 = upper_bound(all(digitPrimes), t2);
		printf("%d\n", i2 - i1);
	}
}
