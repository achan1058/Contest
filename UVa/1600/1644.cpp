#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		int m = n;
		while (!isPrime(n))
			n++;
		while (!isPrime(m))
			m--;
		printd(n - m);
	}
}
