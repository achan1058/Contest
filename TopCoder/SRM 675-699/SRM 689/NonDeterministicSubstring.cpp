#include <bits/stdc++.h>
#include "header.h"

class NonDeterministicSubstring {
public:
	long long ways(string A, string B) {
		set<string> ans;
		rep(i, 0, sz(A) - sz(B) + 1) {
			string s = A.substr(i, sz(B));
			bool good = true;
			rep(j, 0, sz(B)) {
				if (B[j] != '?' && s[j] != B[j]) {
					good = false;
					break;
				}
			}

			if (good)
				ans.insert(s);
		}

		return sz(ans);
	}
};
