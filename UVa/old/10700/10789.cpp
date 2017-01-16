#include <bits/stdc++.h>
#include "primes.h"

int main() {
	string s;
	forX() {
		bool empty = true;
		vi val(256);
		cin >> s;
		printc("");

		irep(c, s)
			val[c]++;
		rep(i, 0, 256) {
			if (isPrime(val[i])) {
				printf("%c", char(i));
				empty = false;
			}
		}
		printf("%s\n", empty ? "empty" : "");
	}
}
