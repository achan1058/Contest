#include <bits/stdc++.h>
#include "header.h"

class PeacefulLine {
public:
	string makeLine(vector<int> x) {
		vi age(50);
		irep(v, x)
			age[v]++;
		irep(v, age) {
			if (v > (sz(x) + 1) / 2)
				return "impossible";
		}
		return "possible";
	}
};
