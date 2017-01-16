#include <bits/stdc++.h>
#include "header.h"

class EllysSubstringSorter {
public:
	string getMin(string S, int L) {
		string minS = S;

		rep(i, 0, sz(S) - L + 1) {
			string s2 = S;
			sort(s2.begin() + i, s2.begin() + i + L);
			if (s2 < minS)
				minS = s2;
		}
		return minS;
	}
};
