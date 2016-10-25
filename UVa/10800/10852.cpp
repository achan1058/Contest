#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int m;
	forX() {
		cin >> m;
		rep(i, m / 2 + 1, m) {
			if (isPrime(i)) {
				printf("%d\n", i);
				break;
			}
		}
	}
}
