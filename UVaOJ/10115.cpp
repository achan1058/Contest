#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	string s;
	while (cin >> n && n != 0) {
		vs find(n), replace(n);
		getline(cin, s);
		rep(i, 0, n) {
			getline(cin, find[i]);
			getline(cin, replace[i]);
		}
		getline(cin, s);
		rep(i, 0, n) {
			int pos = s.find(find[i]);
			while (pos != string::npos) {
				s.replace(pos, sz(find[i]), replace[i]);
				pos = s.find(find[i]);
			}
		}
		printf("%s\n", s.c_str());
	}
}
