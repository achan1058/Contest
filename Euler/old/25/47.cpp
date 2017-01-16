#include <bits/stdc++.h>
#include "primes.h"

int conseq(int n) {
	vi numprimes = { 0, 0, 1 };
	rep(i, 3, inf) {
		numprimes.pb(sz(tally(factor(i))));
		bool good = true;
		rrep(j, sz(numprimes) - 1, sz(numprimes) - n) {
			if (numprimes[j] != n) {
				good = false;
				break;
			}
		}
		if (good)
			return i - n + 1;
	}
	return 0;
}

int main() {
	assert(conseq(2) == 14);
	assert(conseq(3) == 644);
	printf("%d\n", conseq(4));
}
