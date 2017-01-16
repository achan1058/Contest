#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		printf("%d:\n", n);
		if (n == 4) {
			printf("2+2\n");
		} else if (n % 2 == 1) {
			if (isPrime(n - 2))
				printf("2+%d\n", n - 2);
			else
				printf("NO WAY!\n");
		} else {
			for (int z = 3;; z += 2) {
				if (isPrime(z) && isPrime(n - z)) {
					printf("%d+%d\n", z, n - z);
					break;
				}
			}
		}
	}
}
