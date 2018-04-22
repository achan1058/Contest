#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	forX() {
		int l, u;
		cin >> l >> u;
		int num = l, div = 0;
		rep(n, l, u + 1) {
			int d = numFactors(factor(n));
			if (d > div) {
				num = n;
				div = d;
			}
		}
		printf("Between %d and %d, %d has a maximum of %d divisors.\n", l, u, num, div);
	}
}
