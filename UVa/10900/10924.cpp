#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	string s;
	while (cin >> s) {
		int ans = 0;
		irep(c, s) {
			if (c >= 'a')
				ans += c - 'a' + 1;
			else
				ans += c - 'A' + 27;
		}
		print("It is %sa prime word.", ans == 1 || isPrime(ans) ? "" : "not ");
	}
}
