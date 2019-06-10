#include <bits/stdc++.h>
#include "header.h"

int main() {
	vs decode = { "BFPV", "CGJKQSXZ", "DT", "L", "MN", "R" };
	map<char, int> encode;
	rep(i, 0, sz(decode)) {
		irep(c, decode[i])
			encode[c] = i + 1;
	}

	string s;
	while (getline(cin, s)) {
		int cur = 0;
		rep(i, 0, sz(s)) {
			if (encode[s[i]] == cur)
				continue;
			cur = encode[s[i]];
			if (cur != 0)
				printv(cur);
		}
		print();
	}
}
