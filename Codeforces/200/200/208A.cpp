#include <bits/stdc++.h>
#include "utils.h"
#include "header.h"

int main() {
	string s, t, ans;
	cin >> s;
	s += "  ";
	rep(i, 0, sz(s)) {
		if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
			ans += ' ';
			i += 2;
		} else {
			ans += s[i];
		}
	}
	print(tokenize(ans));
}
