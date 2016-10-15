#include <bits/stdc++.h>
#include "header.h"

class PeacefulLine {
public:
	string makeLine(vector<int> x) {
		vi age(50);
		fori(v, x)
			age[v]++;
		fori(v, age) {
			if (v > (sz(x) + 1) / 2)
				return "impossible";
		}
		return "possible";
	}
};
