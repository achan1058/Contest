#include <bits/stdc++.h>
#include "primes.h"

int main() {
	vector<int> primes = sieve(10000000);
	long long n;
	while (cin >> n && n != 0) {
		if (abs(n) == 1) {
			printf("-1\n");
			continue;
		}
		vl fact = fastFactor(n, primes);
		int a = 0, b = fact.size() - 1;
		if (fact[a] == -1)
			a++;
		if (fact[a] == fact[b])
			printf("-1\n");
		else
			printf("%lld\n", fact[b]);
	}
}
