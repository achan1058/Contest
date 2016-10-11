#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int N, m, n;
	vi primes = sieve(40000);
	cin >> N;
	rep(X, 0, N) {
		printf("%s", X > 0 ? "\n" : "");
		cin >> m >> n;
		rep(i, m, n + 1) {
			if (fastIsPrime(i, primes))
				printf("%d\n", i);
		}
	}
}
