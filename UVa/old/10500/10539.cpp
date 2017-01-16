#include <bits/stdc++.h>
#include "primes.h"

int main() {
	vi primes = sieve(1000000);
	vl powers;
	ll b1, b2;
	irep(p, primes) {
		for (ll i = (ll)p * p; i <= 1000000000000ll; i *= p)
			powers.pb(i);
	}

	sort(all(powers));
	forX() {
		cin >> b1 >> b2;
		printf("%d\n", upper_bound(all(powers), b2) - lower_bound(all(powers), b1));
	}
}
