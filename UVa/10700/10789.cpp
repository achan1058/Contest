#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	forX() {
		string s;
		cin >> s;
		map<char, int> m;
		irep(c, s)
			m[c]++;

		printc("");
		bool empty = true;
		irep(p, m) {
			if (isPrime(p.y)) {
				printf("%c", p.x);
				empty = false;
			}
		}
		printf("%s\n", empty ? "empty" : "");
	}
}
