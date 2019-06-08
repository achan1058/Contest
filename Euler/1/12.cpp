#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

ll tri(int n) {
	for (ll i = 1; ; i++) {
		ll t = i * (i + 1) / 2;
		if (numFactors(factor(t)) > n)
			return t;
	}
}

int main() {
	assert(tri(5) == 28);
	printl(tri(500));
}
