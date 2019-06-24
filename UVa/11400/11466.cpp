#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	vi primes = sieve(10000000);
	ll n;
	while (cin >> n && n != 0) {
		vl ans = fastFactor(abs(n), primes);
		print(abs(n) == 1 || ans[0] == ans.back() ? -1 : ans.back());
	}
}
