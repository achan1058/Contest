#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	ll n;
	while (cin >> n && n != 0) {
		vl primes = factor(n);
		printf("%lld = %lld", n, primes[0]);
		rep(i, 1, sz(primes))
			printf(" x %lld", primes[i]);
		print("");
	}
}
