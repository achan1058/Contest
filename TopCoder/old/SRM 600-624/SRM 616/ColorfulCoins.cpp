#include <bits/stdc++.h>
#include "header.h"

class ColorfulCoins {
public:
	int minQueries(vector<long long> values) {
		vl maxcoin;
		rep(i, 1, sz(values))
			maxcoin.pb(values[i] / values[i - 1]);
		maxcoin.pb(1000000000000000000ll);
		sort(all(maxcoin));
		int numcoins = 1;
		rep(i, 0, sz(maxcoin)) {
			ll x = maxcoin[i];
			int c = 1;
			while (i + 1 >= x) {
				c++;
				x *= maxcoin[i];
			}
			numcoins = max(c, numcoins);
		}
		return numcoins;
	}
};
