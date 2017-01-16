#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s1, s2;
	map<string, string> motto;
	forX() {
		getline(cin, s1);
		getline(cin, s2);
		motto[s1] = s2;
	}
	int q;
	cin >> q;
	getline(cin, s1);
	rep(i, 0, q) {
		getline(cin, s1);
		printf("%s\n", motto[s1].c_str());
	}
}
