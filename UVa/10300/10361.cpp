#include <bits/stdc++.h>
#include "util.h"

int main() {
	int N;
	cin >> N;
	string s1, s2;
	getline(cin, s1);

	rep(X, 0, N) {
		getline(cin, s1);
		getline(cin, s2);
		vs t = tokenizer(s1, [](int c) {return (c == '>' || c == '<' ? 1 : 0); }, true);
		printf("%s%s%s%s%s\n", t[0].c_str(), t[1].c_str(), t[2].c_str(), t[3].c_str(), t[4].c_str());
		printf("%s%s%s%s%s\n", s2.substr(0, sz(s2) - 3).c_str(), t[3].c_str(), t[2].c_str(), t[1].c_str(), t[4].c_str());
	}
}
