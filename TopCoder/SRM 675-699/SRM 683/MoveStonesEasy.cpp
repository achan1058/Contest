#include <bits/stdc++.h>
#include "header.h"

class MoveStonesEasy {
public:
	int get(vector<int> a, vector<int> b) {
		int diff = 0, sum = 0;
		rep(i, 0, sz(a)) {
			diff += a[i] - b[i];
			sum += abs(diff);
		}
		return diff == 0 ? sum : -1;
	}
};
