#include <bits/stdc++.h>
#include "header.h"

class GerrymanderEasy {
public:
	double getmax(vector<int> A, vector<int> B, int K) {
		double best = 0;
		rep(i, 0, sz(A)) {
			int At = 0, Bt = 0;
			rep(j, i, sz(A)) {
				At += A[j];
				Bt += B[j];
				if (j - i >= K - 1)
					best = max(best, double(Bt) / At);
			}
		}
		return best;
	}
};
