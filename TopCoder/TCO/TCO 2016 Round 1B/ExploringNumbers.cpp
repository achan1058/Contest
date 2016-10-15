#include <bits/stdc++.h>
#include "primes.h"

class ExploringNumbers {
public:
	int numberOfSteps(int n) {
		int cur = n;
		rep(i, 1, min(1000, n)) {
			if (isPrime(cur))
				return i;
			int next = 0;
			while (cur > 0) {
				next += (cur % 10) * (cur % 10);
				cur /= 10;
			}
			cur = next;
		}
		return -1;
	}
};
