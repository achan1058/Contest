#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	forX() {
		int u, l;
		int num = 0, mx = 0;
		cin >> l >> u;
		rep(i, l, u + 1) {
			int facts = numFactors(factor(i));
			if (facts > mx) {
				num = i;
				mx = facts;
			}
		}
		print("Between %d and %d, %d has a maximum of %d divisors.", l, u, num, mx);
	}
}
