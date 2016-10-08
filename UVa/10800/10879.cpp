#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int N, n;
	cin >> N;
	rep(X, 1, N + 1) {
		cin >> n;
		vi primes = factor(n);
		int f1 = primes[0], f2 = primes[0] * primes[1];
		printf("Case #%d: %d = %d * %d = %d * %d\n", X, n, f1, n / f1, f2, n / f2);
	}
}
