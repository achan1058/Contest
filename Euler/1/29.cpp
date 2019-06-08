#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int terms(int n) {
	set<map<int, int>> s;
	for (int i = 2; i <= n; i++) {
		map<int, int> m = tally(factor(i));
		for (int j = 2; j <= n; j++) {
			map<int, int> m2;
			irep(v, m)
				m2[v.first] = v.second * j;
			s.insert(m2);
		}
	}
	return sz(s);
}

int main() {
	assert(terms(5) == 15);
	print(terms(100));
}
