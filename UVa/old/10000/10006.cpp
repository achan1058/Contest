#include <bits/stdc++.h>
#include "number_theory.h"
#include "primes.h"

int main() {
	ll N;
	while (cin >> N && N != 0) {
		bool carmichael = true;
		if (isPrime(N))
			carmichael = false;
		for (int n = 2; n < N && carmichael; n++) {
			if (power<ll>(n, N, N) != n)
				carmichael = false;
		}
		if (carmichael)
			printf("The number %d is a Carmichael number.\n", N);
		else
			printf("%d is normal.\n", N);
	}
}
