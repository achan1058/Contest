#include <bits/stdc++.h>
#include "header.h"

class Revmatching {
public:
	int smallest(vector<string> A) {
		int n = sz(A), best = inf;
		rep(i, 1, 1 << n) {
			vi weights(n);
			rep(j, 0, n) {
				if (((1 << j) & i) != 0) {
					rep(k, 0, n)
						weights[k] += A[j][k] - '0';
				}
			}

			int del = 0;
			sort(all(weights));
			rep(j, 0, n - bits(i) + 1)
				del += weights[j];

			best = min(best, del);
		}
		return best;
	}
};
