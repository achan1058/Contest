#include <bits/stdc++.h>
#include "header.h"

int main() {
	vs shift = { "1234567890-=", "QWERTYUIOP[]\\", "ASDFGHJKL;\'", "ZXCVBNM,./", "  ", "\n\n" };
	map<char, char> ans;
	irep(s, shift) {
		rep(i, 1, sz(s))
			ans[s[i]] = s[i - 1];
	}
	char c;
	while (cin.get(c))
		printf("%c", ans[c]);
}
