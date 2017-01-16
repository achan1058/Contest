#include <bits/stdc++.h>
#include "header.h"

class ExactTreeEasy {
public:
	vector<int> getTree(int n, int m) {
		int in = n - m;
		vi ans;
		rep(i, 0, in + 1) {
			ans.pb(i);
			ans.pb(i + 1);
		}
		rep(i, in + 2, n) {
			ans.pb(1);
			ans.pb(i);
		}
		return ans;
	}
};
