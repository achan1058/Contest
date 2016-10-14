#include <bits/stdc++.h>
#include "header.h"

class MoveStones {
public:
	long long get(vector<int> a, vector<int> b) {
		int n = sz(a);
		ll best = ll(inf) * ll(inf);
		rep(off, 0, n) {
			ll diff = 0, sum = 0;
			rep(i, 0, n) {
				diff += a[(i + off) % n] - b[(i + off) % n];
				sum += abs(diff);
			}
			if (diff != 0)
				return -1;
			best = min(sum, best);
		}

		return best;
	}
};
