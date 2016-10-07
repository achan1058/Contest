#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int N;
	string s;
	cin >> N;
	rep(X, 1, N + 1) {
		bool empty = true;
		vi val(256);
		cin >> s;
		printf("Case %d: ", X);

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
