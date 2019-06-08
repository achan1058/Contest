#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	vb primes = sieveVector(40000);
	int n;
	while (cin >> n && n != 0) {
		if (n == 4) {
			print("1");
			continue;
		}

		int ans = 0;
		for (int i = 3; 2 * i <= n; i += 2) {
			if (sieveIsPrime(i, primes) && sieveIsPrime(n - i, primes))
				ans++;
		}
		printv(ans);
	}
}
