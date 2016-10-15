#include <bits/stdc++.h>
#include "primes.h"

int main() {
	ll n;
	while (cin >> n && n != 0) {
		printf("%lld = ", n);
		vl primes = factor(n);
		bool fs = true;
		fori(p, primes) {
			printf("%s%lld", fs ? "" : " x ", p);
			fs = false;
		}
		printf("\n");
	}
}
