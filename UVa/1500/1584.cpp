#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	forX() {
		cin >> s;
		vs poss;
		rep(i, 0, sz(s))
			poss.pb(s.substr(i) + s.substr(0, i));

		sort(all(poss));
		printf("%s\n", poss[0].c_str());
	}
}
