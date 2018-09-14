#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int rev(int n) {
	string s = to_string(n);
	reverse(all(s));
	return stoi(s);
}

int main() {
	int n;
	while (cin >> n) {
		if (!isPrime(n)) {
			print("%d is not prime.", n);
			continue;
		}

		int r = rev(n);
		if (n != r && isPrime(r))
			print("%d is emirp.", n);
		else
			print("%d is prime.", n);
	}
}
