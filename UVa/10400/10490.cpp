#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int n;
	vi table(40);
	rep(i, 2, 32) {
		if (!isPrime(i))
			continue;
		if (!isPrime((1ll << i) - 1))
			table[i] = 1;
		else
			table[i] = 2;
	}
	while (cin >> n && n != 0) {
		if (table[n] == 0)
			printf("Given number is NOT prime! NO perfect number is available.\n");
		else if (table[n] == 1)
			printf("Given number is prime. But, NO perfect number is available.\n");
		else
			printf("Perfect: %lld!\n", ((1ll << n) - 1) * (1ll << (n - 1)));
	}
}
