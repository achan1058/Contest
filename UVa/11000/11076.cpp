#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	int n, v;
	vl fact = factTable(12);

	while (cin >> n && n != 0) {
		map<int, int> mp;
		int total = 0;
		rep(i, 0, n) {
			cin >> v;
			mp[v]++;
			total += v;
		}

		ll mul = 0;
		rep(i, 0, n) {
			mul *= 10;
			mul++;
		}

		ll value = fact[n];
		irep(m, mp)
			value /= fact[m.y];

		mul *= total * value / n;
		printf("%lld\n", mul);
	}
}
