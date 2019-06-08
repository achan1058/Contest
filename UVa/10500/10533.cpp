#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

vb pv;
unordered_set<int> smallPrimes;
bool digitPrime(int n) {
	if (!sieveIsPrime(n, pv))
		return false;

	string s = to_string(n);
	int tally = 0;
	irep(c, s)
		tally += c - '0';

	return smallPrimes.find(tally) != smallPrimes.end();
}

int main() {
	pv = sieveVector(1000000);
	smallPrimes.insert(2);
	for (int i = 3; i <= 100; i += 2) {
		if (sieveIsPrime(i, pv))
			smallPrimes.insert(i);
	}

	vi ans(1000001);
	ans[2] = 1;
	rep(i, 3, 1000001)
		ans[i] = ans[i - 1] + digitPrime(i);
	forX() {
		int v1, v2;
		cin >> v1 >> v2;
		printv(ans[v2] - ans[v1 - 1]);
	}
}
