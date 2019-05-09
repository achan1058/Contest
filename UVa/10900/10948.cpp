#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	auto primes = sieveVector(1000000);
	int n;
	while (cin >> n && n != 0) {
		print("%d:", n);
		if (n % 2 == 1) {
			if (sieveIsPrime(n - 2, primes))
				print("2+%d", n - 2);
			else
				print("NO WAY!");
		} else if (n == 4) {
			print("2+2");
		} else {
			for (int i = 3; i < n; i += 2) {
				if (sieveIsPrime(i, primes) && sieveIsPrime(n - i, primes)) {
					print("%d+%d", i, n - i);
					break;
				}
			}
		}
	}
}
