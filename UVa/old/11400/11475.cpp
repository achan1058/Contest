#include <bits/stdc++.h>
#include "dp_algs.h"

int kmp_mod(const string& s, const string& p) {
	vi match = kmp_pre(p);
	int m = sz(s), start = 0;
	rep(i, 0, m) {
		while (start > 0 && s[i] != p[start])
			start = match[start - 1];
		if (s[i] == p[start])
			start++;
	}
	return m - start;
}

int main() {
	string s;
	while (cin >> s) {
		string s2 = s;
		reverse(all(s2));
		printf("%s%s\n", s.substr(0, kmp_mod(s, s2)).c_str(), s2.c_str());
	}
}
