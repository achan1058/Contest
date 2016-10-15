#include <bits/stdc++.h>
#include "header.h"

class Autogame {
public:
	int wayscnt(vector<int> a, int K) {
		vi dest(sz(a));
		rep(i, 0, sz(a)) {
			int cur = i;
			rep(j, 0, min(K, 50))
				cur = a[cur] - 1;
			dest[cur]++;
		}

		ll ans = 1;
		irep(d, dest)
			ans = mul(ans, d + 1);
		return int(ans);
	}
};
