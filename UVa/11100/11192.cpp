#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	string s;
	while (cin >> n >> s && n != 0) {
		int t = sz(s) / n;
		rep(i, 0, n)
			reverse(s.begin() + i * t, s.begin() + (i + 1) * t);
		printv(s);
	}
}
