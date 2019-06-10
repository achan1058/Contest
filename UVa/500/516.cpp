#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	string s;
	while (getline(cin, s) && s != "0") {
		int p, e, n = 1;
		stringstream ss(s);
		while (ss >> p >> e) {
			rep(i, 0, e)
				n *= p;
		}
		auto ans = tally(factor(n - 1));
		for (auto it = ans.rbegin(); it != ans.rend(); it++)
			printf("%d %d%c", it->first, it->second, it == --ans.rend() ? '\n' : ' ');
	}
}
