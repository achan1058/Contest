#include <bits/stdc++.h>
#include "header.h"

class CoinFlipsDiv2 {
public:
	int countCoins(string state) {
		int ans = 0;
		rep(i, 0, sz(state)) {
			if (i != 0 && state[i] != state[i - 1])
				ans++;
			else if (i != sz(state) - 1 && state[i] != state[i + 1])
				ans++;
		}
		return ans;
	}
};
