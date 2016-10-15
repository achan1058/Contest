#include <bits/stdc++.h>
#include "header.h"

class TreeAndVertex {
public:
	int get(vector<int> tree) {
		vi deg(sz(tree) + 1);
		int mx = 0;
		rep(i, 0, sz(tree)) {
			deg[i + 1]++;
			deg[tree[i]]++;
		}
		fori(v, deg)
			mx = max(mx, v);
		return mx;
	}
};
