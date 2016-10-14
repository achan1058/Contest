#include <bits/stdc++.h>
#include "header.h"

class ColorfulCoinsEasy {
public:
	string isPossible(vector<int> values) {
		vi v;
		rep(i, 0, sz(values) - 1)
			v.pb(values[i + 1] / values[i] - 1);

		sort(all(v));
		rep(i, 0, sz(v)) {
			if (i + 1 > v[i])
				return "Impossible";
		}
		return "Possible";
	}
};
