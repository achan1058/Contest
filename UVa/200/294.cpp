#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int L, U;
	forX() {
		cin >> L >> U;
		int max_factor = 0, factor_index = 0;
		rep(n, L, U + 1) {
			int numfactor = numFactors(factor(n));
			if (numfactor > max_factor) {
				max_factor = numfactor;
				factor_index = n;
			}
		}
		printf("Between %d and %d, %d has a maximum of %d divisors.\n", L, U, factor_index, max_factor);
	}
}
