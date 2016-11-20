#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int n = 50000000;
	vi p = sieve(n);
	set<int> s4, s3, s2;

	for (int i = 0; p[i] * p[i] * p[i] * p[i] <= n; i++)
		s4.insert(p[i] * p[i] * p[i] * p[i]);
	irep(v, s4) {
		for (int i = 0; p[i] * p[i] * p[i] + v <= n; i++)
			s3.insert(p[i] * p[i] * p[i] + v);
	}
	irep(v, s3) {
		for (int i = 0; p[i] * p[i] + v <= n; i++)
			s2.insert(p[i] * p[i] + v);
	}
	printf("%d\n", sz(s2));
}
