#include <bits/stdc++.h>
#include "header.h"

class BalancedSubstrings {
public:
	int countSubstrings(string s) {
		int n = sz(s), total = 0;
		rep(i, 0, n) {
			int curw = 0, num = 0;
			rep(j, i, n) {
				if (s[j] == '1') {
					curw += j - i;
					num++;
				}

				if (num == 0 || curw % num == 0)
					total++;
			}
		}
		return total;
	}
};
