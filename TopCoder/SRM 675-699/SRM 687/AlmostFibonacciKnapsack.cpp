#include <bits/stdc++.h>
#include "header.h"

class AlmostFibonacciKnapsack {
public:
	vector<int> getIndices(long long x) {
		vl knapsack;
		vi ans;

		knapsack.pb(2);
		knapsack.pb(3);
		while (knapsack[sz(knapsack) - 1] + knapsack[sz(knapsack) - 2] - 1 < ll(inf) * ll(inf))
			knapsack.pb(knapsack[sz(knapsack) - 1] + knapsack[sz(knapsack) - 2] - 1);
		rrep(i, sz(knapsack) - 1, 0) {
			if (x >= knapsack[i]) {
				ans.pb(i + 1);
				x -= knapsack[i];
			}
		}

		if (x == 1) {
			ans.back() = ans.back() - 1;
			ans.pb(ans.back() - 1);
		}

		return ans;
	}
};
