#include <bits/stdc++.h>
#include "header.h"

class Istr {
public:
	int count(string s, int k) {
		map<char, int> m;
		int ans = 0;
		irep(c, s)
			m[c]++;
		vi count;
		irep(v, m)
			count.pb(v.y);
		sort(all(count));

		rep(i, 0, k) {
			count.back()--;
			sort(all(count));
		}
		irep(v, count)
			ans += v * v;

		return ans;
	}
};
