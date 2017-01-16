#include <bits/stdc++.h>
#include "primes.h"

int main() {
	vi primes = sieve(10000);
	int ans = 0;
	for (int i = 2; i <= 250000; i++) {
		int numsquares = numFactors(factor(i)) / 2;
		if (numsquares <= 10)
			ans++;
	}
	printf("%d\n", ans);
}
