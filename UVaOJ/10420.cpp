#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	string s, c;
	cin >> n;
	getline(cin, s);
	map<string, set<string>> big_map;
	rep(i, 0, n) {
		cin >> c;
		getline(cin, s);
		big_map[c].insert(s);
	}
	fori(c, big_map)
		printf("%s %d\n", c.x.c_str(), sz(c.y));
}
