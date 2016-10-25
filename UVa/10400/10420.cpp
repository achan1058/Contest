#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s, c;
	map<string, set<string>> big_map;
	forX() {
		cin >> c;
		getline(cin, s);
		big_map[c].insert(s);
	}
	irep(c, big_map)
		printf("%s %d\n", c.x.c_str(), sz(c.y));
}
