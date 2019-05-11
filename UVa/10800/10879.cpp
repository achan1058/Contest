#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	forX() {
		int n;
		cin >> n;
		vi primes = factor(n);
		printp("%d = %d * %d = %d * %d", n, primes[0], n / primes[0], primes[0] * primes[1], n / primes[0] / primes[1]);
	}
}
