#include <bits/stdc++.h>
#include "header.h"

bool checkString(const string& s) {
	int n = sz(s);
	for (int i = 1; n - 2 * i >= 0; i++) {
		bool good = true;
		for (int j = 0; j < i; j++) {
			if (s[n - i + j] != s[n - 2 * i + j]) {
				good = false;
				break;
			}
		}
		if (good)
			return false;
	}
	return true;
}

int main() {
	int n, k;
	while (cin >> n >> k && (n | k) != 0) {
		string s = "A";
		char large = 'A' + k - 1;
		for (int i = 1; i < n; i++) {
			s.push_back('A');
			while (!checkString(s)) {
				while (s.back() == large)
					s.resize(sz(s) - 1);
				s.back()++;
			}
		}

		int i;
		for (i = 0; i < sz(s) - 4; i += 4)
			printf("%s%c", s.substr(i, 4).c_str(), i % 64 == 60 ? '\n' : ' ');
		printf("%s\n%d\n", s.substr(i).c_str(), sz(s));
	}
}
