#include <bits/stdc++.h>
#include "header.h"

class EqualSubstrings2 {
public:
	int get(string s) {
		int ans = 0;
		rep(j, 1, sz(s)) {
			rep(i, 0, sz(s)) {
				rep(k, i + j, sz(s)) {
					if (k + j <= sz(s) && s.substr(i, j) == s.substr(k, j))
						ans++;
				}
			}
		}
		return ans;
	}
};
