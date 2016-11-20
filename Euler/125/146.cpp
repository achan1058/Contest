#include <bits/stdc++.h>
#include "primes.h"

inline bool smallPrimesTest(ll d, const vi& primes) {
	irep(p, primes) {
		if (p * p > d)
			return true;
		if ((d + 1) % p == 0 || (d + 3) % p == 0 ||
			(d + 7) % p == 0 || (d + 9) % p == 0 ||
			(d + 13) % p == 0 || (d + 27) % p == 0)
			return false;
	}
	return true;
}

inline bool millerRabinTest(ll d) {
	return millerRabin(d + 1) && millerRabin(d + 3)
		&& millerRabin(d + 7) && millerRabin(d + 9)
		&& millerRabin(d + 13) && millerRabin(d + 27);
}

inline bool falsePrimeTest(ll d) {
	return millerRabin(d + 5) || millerRabin(d + 11)
		|| millerRabin(d + 15) || millerRabin(d + 17)
		|| millerRabin(d + 19) || millerRabin(d + 21)
		|| millerRabin(d + 23) || millerRabin(d + 25);
}

ll sumPrimes(int n) {
	vi primes = sieve(100000), start = { 10, 80, 130, 200 };
	primes = vi(primes.begin() + 4, primes.end());
	ll ans = 0;
	irep(k, start) {
		for (int i = k; i <= n; i += 210) {
			ll d = ll(i) * ll(i);
			if (smallPrimesTest(d, primes) && millerRabinTest(d) && !falsePrimeTest(d))
				ans += i;
		}
	}
	return ans;
}

int main() {
	assert(sumPrimes(1000000) == 1242490);
	printf("%lld\n", sumPrimes(150000000));
}
