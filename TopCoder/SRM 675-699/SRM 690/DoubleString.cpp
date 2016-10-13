#include <bits/stdc++.h>
#include "header.h"

class DoubleString {
public:
	string check(string S) {
		int n = sz(S);
		if (n % 2 != 0)
			return "not square";

		n /= 2;
		rep(i, 0, n) {
			if (S[i] != S[n + i])
				return "not square";
		}
		return "square";
	}
};
