#pragma once
#include "point.h"

template<class T>
vector<point<T>> graham(vector<point<T>>& p, bool allp = false) {
	int rev;
	if (sz(p) < 3)
		return p;
	rep(i, 1, sz(p)) {
		if (p[i] < p[0])
			swap(p[i], p[0]);
	}
	sort(p.begin() + 1, p.end(), [&](point<T> p1, point<T> p2) {
		T d = p[0].sa2(p1, p2);
		return d > T(0) ? true : (d < T(0) ? false : p[0].dist2(p1) > p[0].dist2(p2));
	});
	for (rev = 2; rev < sz(p); rev++) {
		if (p[0].sa2(p[rev - 1], p[rev]) != T(0))
			break;
	}
	reverse(p.begin() + 1, p.begin() + rev);
	vector<point<T>> hull = { p[0], p[1] };
	rep(i, 2, sz(p)) {
		while (sz(hull) > 1) {
			T d = hull[sz(hull) - 2].sa2(hull[sz(hull) - 1], p[i]);
			if (d > T(0) || (d == T(0) && allp))
				break;
			hull.pop_back();
		}
		hull.pb(p[i]);
	}
	if (!allp && sz(hull) > 2 && hull[sz(hull) - 2].sa2(hull[sz(hull) - 1], hull[0]) == T(0))
		hull.pop_back();
	return hull;
}
