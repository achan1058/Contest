#include <bits/stdc++.h>
#include "primes.h"

ll ans(ll n) {
	return factor(n).back();
}

int main() {
	assert(ans(13195) == 29);
	printf("%lld\n", ans(600851475143ll));
}
