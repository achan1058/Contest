#include <bits/stdc++.h>
#include "header.h"
#include "primes.h"

int main() {
	forX() {
		int n, k;
		cin >> n >> k;
		vi primes = factor(n);
		int ans = sumFactors(primes);
		if (n % k == 0) {
			primes = factor(n / k);
			ans -= sumFactors(primes) * k;
		}
		printf("%d\n", ans);
	}
}
