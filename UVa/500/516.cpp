#include <bits/stdc++.h>
#include "primes.h"

int main() {
	string s;
	while (getline(cin, s) && s != "0") {
		int p, e;
		stringstream ss;
		ss << s;

		int result = 1;
		while (ss >> p >> e) {
			rep(j, 0, e)
				result *= p;
		}

		auto primes = tally(factor(result - 1));
		bool fs = true;
		for (auto it = primes.rbegin(); it != primes.rend(); it++) {
			printf("%s%d %d", fs ? "" : " ", it->x, it->y);
			fs = false;
		}
		printf("\n");
	}
}
