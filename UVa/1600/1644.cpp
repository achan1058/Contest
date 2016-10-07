#include <bits/stdc++.h>
#include "primes.h"

int main() {
	vi primes = sieve(1300000);
	int n;
	while (cin >> n && n != 0) {
		auto it = lower_bound(all(primes), n);
		printf("%d\n", n == *it ? 0 : *it - *(it - 1));
	}
}
