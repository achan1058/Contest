#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		if (n < 8) {
			print("Impossible.");
		} else if (n == 8) {
			print("2 2 2 2");
		} else if (n == 9) {
			print("2 2 2 3");
		} else {
			if (n % 2) {
				printf("2 3 ");
				n -= 5;
			} else {
				printf("2 2 ");
				n -= 4;
			}
			for (int i = 3; i <= n / 2; i += 2) {
				if (isPrime(i) && isPrime(n - i)) {
					print("%d %d", i, n - i);
					break;
				}
			}
		}
	}
}
