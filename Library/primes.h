#pragma once
#include "util.h"

template <class T>
bool isPrime(T n) {
	if (n < 2) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (T p = 5; p * p <= n; p += 6) {
		if (n % p == 0 || n % (p + 2) == 0)
			return false;
	}
	return true;
}

vi sieve(int n) {
	n = (n - 1) / 2;
	vb arr(n + 1);
	vi primes(1, 2);
	int p = 1;

	while (2 * p * (p + 1) <= n) {
		if (!arr[p]) {
			primes.pb(2 * p + 1);
			for (int j = 2 * p * (p + 1); j <= n; j += 2 * p + 1)
				arr[j] = true;
		}
		p++;
	}

	while (p <= n) {
		if (!arr[p])
			primes.push_back(2 * p + 1);
		p++;
	}

	return primes;
}
