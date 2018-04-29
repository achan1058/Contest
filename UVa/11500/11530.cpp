#include <bits/stdc++.h>
#include "header.h"

int main() {
	vs buttons = { "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz", " " };
	map<char, int> press;
	irep(s, buttons) {
		rep(i, 0, sz(s))
			press[s[i]] = i + 1;
	}
	forX() {
		string s;
		getline(cin, s);
		int ans = 0;
		irep(c, s)
			ans += press[c];
		printp("%d", ans);
	}
}
