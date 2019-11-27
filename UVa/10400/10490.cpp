#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	int n;
	vb poss(32);
	rep(i, 2, 32) {
		ll t = (1ll << i) - 1;
		if (isPrime(t))
			poss[i] = true;
	}

	while (cin >> n && n != 0) {
		if (!isPrime(n))
			print("Given number is NOT prime! NO perfect number is available.");
		else if (!poss[n])
			print("Given number is prime. But, NO perfect number is available.");
		else
			print("Perfect: %lld!", ((1ll << n) - 1) * (1ll << (n - 1)));
	}
}
