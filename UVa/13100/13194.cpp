#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	vi primes = sieve(1000000);
	forX() {
		ll n;
		cin >> n;
		ll s = sumFactors(fastFactor(n, primes)) - n;
		print("%s", s > n ? "abundant" : (s < n ? "deficient" : "perfect"));
	}
}
