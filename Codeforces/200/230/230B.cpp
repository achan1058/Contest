#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	forX() {
		ll n;
		cin >> n;
		ll r = sqrt(n);
		if (r * r != n) {
			print("NO");
			continue;
		}
		print("%s", isPrime(r) ? "YES" : "NO");
	}
}
