#include <bits/stdc++.h>
#include "header.h"

class BearPair {
public:
	int bigDistance(string s) {
		int ans = -1;
		rep(i, 0, sz(s)) {
			rep(j, 1, sz(s)) {
				if (s[j] != s[i])
					ans = max(ans, j - i);
			}
		}
		return ans;
	}
};
