#include <bits/stdc++.h>
#include "primes.h"

ll numberIrreducibleFractions(int n) {
	ll ans = 0;
	rep(d, 2, n + 1)
		ans += eulerPhi(factor(d));
	return ans;
}

int main() {
	assert(numberIrreducibleFractions(8) == 21);
	printf("%lld\n", numberIrreducibleFractions(1000000));
}
