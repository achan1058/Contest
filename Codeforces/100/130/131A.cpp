#include <bits/stdc++.h>
#include "header.h"

bool islock(const string& s) {
	rep(i, 1, sz(s)) {
		if (islower(s[i]))
			return false;
	}
	return true;
}

int main() {
	string s;
	cin >> s;
	if (islock(s)) {
		irep(c, s) {
			if (isupper(c))
				c = tolower(c);
			else
				c = toupper(c);
		}
	}
	printv(s);
}
