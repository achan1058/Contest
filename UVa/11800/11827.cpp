#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	string s;
	cin >> n;
	getline(cin, s);
	rep(i, 0, n) {
		int best = 0, v;
		getline(cin, s);
		stringstream ss(s);
		vi ints;
		while (ss >> v)
			ints.pb(v);
		drep(i, j, sz(ints), i)
			best = max(best, gcd(ints[i], ints[j]));
		printf("%d\n", best);
	}
}
