#include <bits/stdc++.h>
#include "primes.h"

int main() {
	for (ll i = 1;; i++) {
		ll tri = i * (i + 1) / 2;
		if (numFactors(factor(tri)) > 500) {
			printf("%lld\n", tri);
			break;
		}
	}
}
