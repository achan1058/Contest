#include <bits/stdc++.h>
#include "header.h"

ll prod(int n, const string& s) {
	ll ans = 0;
	rep(i, n, sz(s) + 1) {
		ll p = 1;
		rep(j, i - n, i)
			p *= s[j] - '0';
		ans = max(ans, p);
	}
	return ans;
}

int main() {
	fstream fin("Euler/input/8.txt");
	string digits, s;
	while (fin >> s)
		digits += s;
	assert(prod(4, digits) == 5832);
	printl(prod(13, digits));
}
