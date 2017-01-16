#include <bits/stdc++.h>
#include "header.h"

void display(const string& s, const string& cur = "") {
	if (sz(cur) == sz(s)) {
		printf("%s\n", cur.c_str());
		return;
	}
	string st = s[sz(cur)] + cur;
	display(s, st);
	rep(i, 0, sz(cur)) {
		swap(st[i], st[i + 1]);
		display(s, st);
	}
}

int main() {
	string s;
	bool fs = true;
	while (cin >> s) {
		printf("%s", fs ? "" : "\n");
		fs = false;
		display(s);
	}
}
