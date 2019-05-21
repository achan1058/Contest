#include <bits/stdc++.h>
#include "dp_algs.h"
#include "header.h"

int main() {
	vs s1, s2;
	string s;
	while (cin >> s) {
		while (s != "#") {
			s1.pb(s);
			cin >> s;
		}
		while (cin >> s && s != "#")
			s2.pb(s);

		vs ans = lcs(s1, s2).f;
		rep(i, 0, sz(ans))
			printf("%s%c", ans[i].c_str(), i == sz(ans) - 1 ? '\n' : ' ');

		s1.clear();
		s2.clear();
	}
}
