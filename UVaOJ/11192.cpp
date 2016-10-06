#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	string s;
	while (cin >> n && n != 0) {
		cin >> s;
		int t = sz(s) / n;
		rep(i, 0, n)
			reverse(s.begin() + t * i, s.begin() + t * (i + 1));
		printf("%s\n", s.c_str());
	}
}
