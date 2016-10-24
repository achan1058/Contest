#include <bits/stdc++.h>
#include "primes.h"

int main() {
	vi n(1, 1);
	int A, B;
	while (n.back() <= 1000000)
		n.pb(n.back() + numFactors(factor(n.back())));
	forX() {
		cin >> A >> B;
		printc("%d\n", upper_bound(all(n), B) - lower_bound(all(n), A));
	}
}
