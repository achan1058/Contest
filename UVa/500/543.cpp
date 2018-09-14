#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		for (int i = 3; i <= n / 2; i += 2) {
			if (isPrime(i) && isPrime(n - i)) {
				print("%d = %d + %d", n, i, n - i);
				break;
			}
		}
	}
}
