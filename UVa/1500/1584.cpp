#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		cin >> s;
		string ans = s;
		rep(i, 1, sz(s))
			ans = min(ans, s.substr(i) + s.substr(0, i));
		print(ans);
	}
}
