#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	vi primes = sieve(200000);
	assert(sz(primes) >= 10000);
	assert(primes[6 - 1] == 13);
	printd(primes[10001 - 1]);
}
