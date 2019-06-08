#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	ll n;
	while (cin >> n && n >= 0) {
		vl primes = factor(n);
		irep(p, primes)
			print("    %lld", p);
		print();
	}
}
