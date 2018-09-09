#include <bits/stdc++.h>
#include "number_theory.h"
#include "primes.h"
#include "header.h"

int main() {
	ll n;
	while (cin >> n && n != 0) {
		if (isPrime(n)) {
			print("%d is normal.", n);
			continue;
		}
		bool car = true;
		rep(i, 2, n) {
			if (powmod<ll>(i, n, n) != i) {
				car = false;
				break;
			}
		}
		if (car)
			print("The number %d is a Carmichael number.", n);
		else
			print("%d is normal.", n);
	}
}
