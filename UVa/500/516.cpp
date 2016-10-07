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

		vi primes = factor(result - 1);
		map<int, int> facts;
		irep(p, primes)
			facts[p]++;

		bool fs = true;
		for (auto it = facts.rbegin(); it != facts.rend(); it++) {
			printf("%s%d %d", fs ? "" : " ", it->x, it->y);
			fs = false;
		}
		printf("\n");
	}
}
