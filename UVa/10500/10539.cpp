#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	vl primepow;
	vi primes = sieve(1000000);
	irep(p, primes) {
		for (ll t = ll(p) * p; t <= 1000000000000; t *= p)
			primepow.pb(t);
	}
	sort(all(primepow));
	
	ll l, h;
	forX() {
		cin >> l >> h;
		printv(upper_bound(all(primepow), h) - lower_bound(all(primepow), l));
	}
}
