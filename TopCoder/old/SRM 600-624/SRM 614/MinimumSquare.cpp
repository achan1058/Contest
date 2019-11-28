#include <bits/stdc++.h>
#include "header.h"

class MinimumSquare {
public:
	long long minArea(vector<int> x, vector<int> y, int K) {
		vpii points;
		rep(i, 0, sz(x))
			points.pb({ x[i], y[i] });
		sort(all(points));

		int minDist = INT_MAX;
		rep(i, 0, sz(points)) {
			rep(j, i + K - 1, sz(points)) {
				int horDist = points[j].first - points[i].first;
				vi p2;
				rep(k, i, j + 1)
					p2.pb(points[k].second);

				sort(all(p2));
				rep(k, 0, sz(p2) - K + 1)
					minDist = min(minDist, max(horDist, p2[k + K - 1] - p2[k]));
			}
		}

		ll area = minDist + 2;
		area *= area;
		return area;
	}
};
