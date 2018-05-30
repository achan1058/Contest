#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

vector<int> badSieve(int n) {
	vector<bool> arr = sieveVector(n);
	vector<int> primes = { 1, 2 };
	n = (n - 1) / 2;
	for (int i = 1; i < int(arr.size()); i++) {
		if (arr[i])
			primes.push_back(2 * i + 1);
	}
	return primes;
}

int main() {
	vi primes = badSieve(1000);
	int n, c;
	while (cin >> n >> c) {
		printf("%d %d:", n, c);
		int np = upper_bound(all(primes), n) - primes.begin();
		int lower = max(0, np / 2 - c + np % 2), upper = min(np - 1, np / 2 + c - 1);
		rep(i, lower, upper + 1)
			printf(" %d", primes[i]);
		print("\n");
	}
}
