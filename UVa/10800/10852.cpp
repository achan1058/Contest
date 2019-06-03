#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	vi primes = sieve(10000);
	forX() {
		int n, best = 0, ans;
		cin >> n;
		irep(p, primes) {
			if (p > n)
				break;
			if (n % p > best) {
				best = n % p;
				ans = p;
			}
		}
		print("%d", ans);
	}
}
