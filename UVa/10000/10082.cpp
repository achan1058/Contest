#include <bits/stdc++.h>
#include "shortest_path.h"
#include "header.h"

int main() {
	vs keyboard = { "`1234567890-=", "QWERTYUIOP[]\\", "ASDFGHJKL;\'", "ZXCVBNM,./" };
	map<char, char> shift;
	irep(s, keyboard) {
		rep(i, 1, sz(s))
			shift[s[i]] = s[i - 1];
	}
	shift[' '] = ' ';
	string s;
	while (getline(cin, s)) {
		irep(c, s)
			c = shift[c];
		printf("%s\n", s.c_str());
	}
}
