#include <bits/stdc++.h>
#include "header.h"

class Istr {
public:
	int count(string s, int k) {
		map<char, int> m;
		int ans = 0;
		fori(c, s)
			m[c]++;
		vi count;
		fori(v, m)
			count.pb(v.y);
		sort(all(count));

		rep(i, 0, k) {
			count.back()--;
			sort(all(count));
		}
		fori(v, count)
			ans += v * v;

		return ans;
	}
};
