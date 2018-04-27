#include <bits/stdc++.h>
#include "header.h"

int main() {
	vs digits = { "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };
	map<char, int> m;
	rep(i, 0, sz(digits)) {
		irep(c, digits[i])
			m[c] = i;
	}
	
	string s;
	while (cin >> s) {
		irep(c, s) {
			if (isupper(c))
				printf("%d", m[c]);
			else
				printf("%c", c);
		}
		print("");
	}
}
