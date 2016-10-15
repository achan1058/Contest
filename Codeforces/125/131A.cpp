#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	int upper = 1;
	cin >> s;
	rep(i, 1, sz(s))
		upper &= isupper(s[i]);
	if (upper) {
		fori(c, s)
			c = isupper(c) ? tolower(c) : toupper(c);
	}
	printf("%s\n", s.c_str());
}
