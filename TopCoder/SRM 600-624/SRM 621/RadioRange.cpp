#include <bits/stdc++.h>
#include "header.h"

class RadioRange {
public:
	double RadiusProbability(vector<int> X, vector<int> Y, vector<int> R, int Z) {
		int n = sz(X);
		vd badm(n), badM(n);
		vd crit;
		crit.pb(0);
		crit.pb(Z);

		rep(i, 0, n) {
			double x = X[i], y = Y[i], r = R[i];
			if (x * x + y * y <= r * r) {
				badm[i] = 0;
				badM[i] = sqrt(x * x + y * y) + R[i];
				crit.pb(badM[i]);
			} else {
				badm[i] = sqrt(x * x + y * y) - R[i];
				badM[i] = sqrt(x * x + y * y) + R[i];
				crit.pb(badm[i]);
				crit.pb(badM[i]);
			}
		}


		sort(all(crit));
		double total = 0;

		rep(i, 0, sz(crit) - 1) {
			if (crit[i] < 0 || crit[i + 1] > Z)
				continue;
			double mid = (crit[i] + crit[i + 1]) / 2;
			bool good = true;

			rep(j, 0, n)
				if (mid >= badm[j] && mid <= badM[j]) {
					good = false;
					break;
				}
			if (good)
				total += crit[i + 1] - crit[i];
		}

		return total / Z;
	}
};
