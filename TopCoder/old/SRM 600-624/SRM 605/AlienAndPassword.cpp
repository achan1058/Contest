#include <bits/stdc++.h>
#include "header.h"

class AlienAndPassword {
public:
	int getNumber(string S) {
		set<string> s;
		rep(i, 0, sz(S)) {
			string s2 = S.substr(0, i) + S.substr(i + 1);
			s.insert(s2);
		}
		return sz(s);
	}
};
