#include <bits/stdc++.h>
#include "primes.h"

int main() {
	vi primes = sieve(1000000);
	vl powers;
	int N;
	ll b1, b2;
	cin >> N;
	fori(p, primes) {
		for (ll i = (ll)p * p; i <= 1000000000000ll; i *= p)
			powers.pb(i);
	}

	sort(all(powers));
	rep(X, 0, N) {
		cin >> b1 >> b2;
		printf("%d\n", upper_bound(all(powers), b2) - lower_bound(all(powers), b1));
	}
}
