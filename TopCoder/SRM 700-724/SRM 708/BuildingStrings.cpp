#include <bits/stdc++.h>
#include "header.h"

class BuildingStrings {
public:
	string build(int n, int l) {
		string ans;
		rep(i, 0, n)
			ans += char(i + 'a');
		rep(i, n, l)
			ans += 'a';
		return ans;
	}
	vector<string> findAny(int K) {
		vs ans;
		while (K > 0) {
			int n = 1, l = 1, prod = n * l;
			while (prod <= K) {
				if (l < 50 && n * (l + 1) <= K)
					l++;
				if (n < 26 && (n + 1) * l <= K)
					n++;
				if (n * l == prod)
					break;
				prod = n * l;
			}
			ans.pb(build(n, l));
			K -= n * l;
		}
		return ans;
	}
};
