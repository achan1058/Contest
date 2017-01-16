#include <bits/stdc++.h>
#include "primes.h"

int main() {
	ll n;
	while (cin >> n && n != -1) {
		vl factors = factor(n);
		irep(v, factors)
			printf("    %lld\n", v);
		printf("\n");
	}
}
