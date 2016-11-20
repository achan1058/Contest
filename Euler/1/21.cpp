#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int ans = 0;
	rep(n, 2, 10000) {
		int ami = sumFactors(factor(n)) - n;
		if (n != ami && sumFactors(factor(ami)) == n + ami)
			ans += n;
	}
	printf("%d\n", ans);
}
