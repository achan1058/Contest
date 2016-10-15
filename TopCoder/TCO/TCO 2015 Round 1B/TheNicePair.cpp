#include <bits/stdc++.h>
#include "header.h"

class TheNicePair {
public:
	int solve(vector<int> A) {
		int result = -1;
		vb good(sz(A));

		rep(v, 2, 1001) {
			rep(i, 0, sz(A)) {
				int counter = 0;
				good[i] = (A[i] % v == 0);
				rrep(j, i, 0) {
					if (good[j])
						counter++;
					if (2 * counter >= i - j + 1)
						result = max(result, i - j);
				}
			}
		}
		return result;
	}
};
