#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	vs dict;
	unordered_set<string> m;
	while (cin >> s) {
		dict.pb(s);
		m.insert(s);
	}
	irep(d, dict) {
		rep(i, 1, sz(d) - 1) {
			string s1 = d.substr(0, i), s2 = d.substr(i);
			if (m.find(s1) != m.end() && m.find(s2) != m.end()) {
				print(d);
				break;
			}
		}
	}
}
