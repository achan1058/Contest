#include <bits/stdc++.h>
#include "header.h"

ll ans(int n, const string& s) {
	ll max_prod = 0;
	rep(i, 0, sz(s) - n) {
		ll prod = 1;
		rep(j, 0, n)
			prod *= s[i + j] - '0';

		max_prod = max(max_prod, prod);
	}
	return max_prod;
}

int main() {
	fstream in("Euler/input/8.txt");
	string s;
	in >> s;
	assert(ans(4, s) == 5832);
	printf("%lld\n", ans(13, s));
}
