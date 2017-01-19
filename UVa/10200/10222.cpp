#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<char, char> decode = { { '\n', '\n' },{ ' ', ' ' } };
	vs code = { "qwertyuiop[]\\", "asdfghjkl;\'", "zxcvbnm,./" };
	irep(s, code) {
		rep(i, 2, sz(s))
			decode[s[i]] = s[i - 2];
	}
	char c;
	while (cin.get(c))
		printf("%c", decode[tolower(c)]);
}
