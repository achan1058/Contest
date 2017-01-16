#include <bits/stdc++.h>
#include "header.h"

class Bitwisdom {
public:
	double expectedActions(vector<int> p) {
		int n = sz(p);
		vvd bit0 = md(n, n, 0);
		vvd bit1 = md(n, n, 0);
		bit1[0][0] = p[0] / 100.;
		bit0[0][0] = 1 - bit1[0][0];

		rep(i, 1, n) {
			rep(j, 0, i) {
				double prob = p[i] / 100.;
				bit1[i][j] += bit1[i - 1][j] * prob;
				bit1[i][j + 1] += bit0[i - 1][j] * prob;
				bit0[i][j] += bit0[i - 1][j] * (1 - prob);
				bit0[i][j + 1] += bit1[i - 1][j] * (1 - prob);
			}
		}

		double total = bit1[n - 1][0];
		rep(i, 1, n) {
			total += bit1[n - 1][i] * i;
			total += bit0[n - 1][i] * i;
		}
		return total;
	}
};
