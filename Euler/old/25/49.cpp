#include <bits/stdc++.h>
#include "primes.h"

int sortDigits(int n) {
	vi a = { n / 1000, (n / 100) % 10, (n / 10) % 10, n % 10 };
	sort(all(a));
	return a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
}
int main() {
	vi primes = sieve(10000);
	int first = 0;
	while (primes[first] < 1000)
		first++;
	rep(i, first, sz(primes)) {
		rep(j, i + 1, sz(primes)) {
			int p3 = 2 * primes[j] - primes[i];
			if (primes[i] == 1487 && primes[j] == 4817)
				continue;
			if (binary_search(all(primes), p3) && sortDigits(primes[i]) == sortDigits(primes[j]) && sortDigits(primes[i]) == sortDigits(p3))
				printf("%d%d%d\n", primes[i], primes[j], p3);
		}
	}
}
