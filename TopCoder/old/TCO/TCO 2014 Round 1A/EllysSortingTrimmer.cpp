#include <bits/stdc++.h>
#include "header.h"

class EllysSortingTrimmer {
public:
	string getMin(string S, int L) {
		rrep(i, sz(S) - L, 0)
			sort(S.begin() + i, S.begin() + i + L);
		return S.substr(0, L);
	}
};
