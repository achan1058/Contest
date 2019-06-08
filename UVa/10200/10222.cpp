#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	vs code = { "qwertyuiop[]", "asdfghjkl;\'", "zxcvbnm,./" };
	map<char, char> m;
	m[' '] = ' ';
	irep(c, code) {
		rep(i, 0, sz(c) - 2)
			m[c[i + 2]] = c[i];
	}
	while (getline(cin, s)) {
		irep(c, s)
			printf("%c", m[tolower(c)]);
		print();
	}
}
