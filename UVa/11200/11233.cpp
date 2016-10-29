#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<string, string> plural;
	string s1, s2;
	int n, m;
	cin >> n >> m;
	rep(i, 0, n) {
		cin >> s1 >> s2;
		plural[s1] = s2;
	}

	rep(i, 0, m) {
		cin >> s1;
		auto it = plural.find(s1);
		if (it != plural.end()) {
			printf("%s\n", it->y.c_str());
			continue;
		}
		
		if (sz(s1) >= 2) {
			s2 = s1.substr(sz(s1) - 2);
			if (s2 == "ch" || s2 == "sh") {
				printf("%ses\n", s1.c_str());
				continue;
			} else if (s2[1] == 'y' && s2[0] != 'a' && s2[0] != 'e' && s2[0] != 'i' && s2[0] != 'o' && s2[0] != 'u') {
				printf("%sies\n", s1.substr(0, sz(s1) - 1).c_str());
				continue;
			}
		}

		if (s1.back() == 'o' || s1.back() == 's' || s1.back() == 'x')
			printf("%ses\n", s1.c_str());
		else
			printf("%ss\n", s1.c_str());
	}
}
