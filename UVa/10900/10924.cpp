#include <bits/stdc++.h>
#include "primes.h"

int charToScore(char c) {
	if (c >= 'a' && c <= 'z')
		return c + 1 - 'a';
	else
		return c + 27 - 'A';
}

int main() {
	string s;
	while (cin >> s) {
		int sum = 0;
		fori(c, s)
			sum += charToScore(c);
		printf("It is %sa prime word.\n", sum == 1 || isPrime(sum) ? "" : "not ");
	}
}
