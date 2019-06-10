#include <bits/stdc++.h>
#include "header.h"

void recurse(const string& s1, const string& s2) {
	rep(i, 0, sz(s2)) {
		if (s1[0] == s2[i]) {
			recurse(s1.substr(1, i), s2.substr(0, i));
			recurse(s1.substr(i + 1, sz(s2) - i - 1), s2.substr(i + 1, sz(s2) - i - 1));
			printv(s1[0]);
			return;
		}
	}
}

int main() {
	string s1, s2;
	while (cin >> s1 >> s2) {
		recurse(s1, s2);
		print();
	}
}
