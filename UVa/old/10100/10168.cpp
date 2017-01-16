#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int n;
	while (cin >> n) {
		if (n < 8) {
			printf("Impossible.\n");
			continue;
		} else if (n == 8) {
			printf("2 2 2 2\n");
			continue;
		} else if (n == 9) {
			printf("2 2 2 3\n");
			continue;
		} else if (n % 2 == 0) {
			printf("2 2 ");
			n -= 4;
		} else {
			printf("2 3 ");
			n -= 5;
		}
		for (int i = 3;; i += 2) {
			if (isPrime(i) && isPrime(n - i)) {
				printf("%d %d\n", i, n - i);
				break;
			}
		}
	}
}
