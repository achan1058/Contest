#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int n;
	forX() {
		cin >> n;
		vi primes = factor(n);
		int f1 = primes[0], f2 = primes[0] * primes[1];
		printp("%d = %d * %d = %d * %d\n", n, f1, n / f1, f2, n / f2);
	}
}
