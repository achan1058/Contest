#include <bits/stdc++.h>
#include "header.h"

class Robofactory {
public:
	int match(int v, string s) {
		return (v % 2 == 0 && s == "Even") || (v % 2 == 1 && s == "Odd");
	}
	int reveal(vector<int> query, vector<string> answer) {
		int ans = 0;
		rep(i, 0, sz(query)) {
			if (!match(query[i], answer[i]))
				return i;
			if (i < sz(query) - 1 && query[i] % 2 == 0)
				ans = -1;
		}
		return ans;
	}
};
