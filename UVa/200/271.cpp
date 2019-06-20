#include <bits/stdc++.h>
#include "header.h"

bool recurse(const string& s, int& n) {
	if (n >= sz(s))
		return false;
	if (s[n] >= 'p' && s[n] <= 'z')
		return true;
	if (s[n] == 'N')
		return recurse(s, ++n);
	if (s[n] == 'C' || s[n] == 'D' || s[n] == 'E' || s[n] == 'I')
		return recurse(s, ++n) && recurse(s, ++n);
	return false;
}

int main() {
	string s;
	while (cin >> s) {
		int n = 0;
		print(recurse(s, n) && n == sz(s) - 1 ? "YES" : "NO");
	}
}
