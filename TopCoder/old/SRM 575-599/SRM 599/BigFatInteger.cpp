#include <bits/stdc++.h>
#include "primes.h"

class BigFatInteger {
public:
	int minOperations(int A, int B) {
		map<int, int> primes = tally(factor(A));
		int maxdeg = 0;
		irep(p, primes)
			maxdeg = max(maxdeg, p.y);
		int pw = 0, d = 1;
		while (d < maxdeg * B) {
			d *= 2;
			pw++;
		}
		return pw + sz(primes);
	}
};
