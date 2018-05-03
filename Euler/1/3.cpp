#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

ll largest(ll n) {
	return factor(n).back();
}

int main() {
	assert(largest(13195) == 29);
	print("%lld", largest(600851475143));
}
