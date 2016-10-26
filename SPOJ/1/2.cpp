#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int m, n;
	vi primes = sieve(40000);
	forX() {
		printX("");
		cin >> m >> n;
		rep(i, m, n + 1) {
			if (fastIsPrime(i, primes))
				printf("%d\n", i);
		}
	}
}
