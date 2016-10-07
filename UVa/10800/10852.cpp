#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int N, m;
	cin >> N;
	rep(X, 0, N) {
		cin >> m;
		rep(i, m / 2 + 1, m) {
			if (isPrime(i)) {
				printf("%d\n", i);
				break;
			}
		}
	}
}
