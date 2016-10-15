#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	string s;
	while (cin >> n >> s && (n != 0 || s != "0")) {
		string s2;
		fori(c, s) {
			if (c == n + '0')
				continue;
			if (c == '0' && sz(s2) == 0)
				continue;
			s2.pb(c);
		}

		printf("%s\n", sz(s2) == 0 ? "0" : s2.c_str());
	}
}
