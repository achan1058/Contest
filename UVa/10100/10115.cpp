#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		vs findstr(n), replacestr(n);
		string s;
		getline(cin, s);
		rep(i, 0, n) {
			getline(cin, findstr[i]);
			getline(cin, replacestr[i]);
		}

		getline(cin, s);
		rep(i, 0, n) {
			auto pos = s.find(findstr[i]);
			while (pos != s.npos) {
				s = s.substr(0, pos) + replacestr[i] + s.substr(pos + sz(findstr[i]));
				pos = s.find(findstr[i]);
			}
		}
		printf("%s\n", s.c_str());
	}
}
