#pragma once
#include "point.h"

// CHANGES POINT ORDER
template<class T>
vector<point<T>> graham(vector<point<T>>& p, bool allp = false) {
	if (sz(p) < 3)
		return p;
	rep(i, 1, sz(p)) {
		if (p[i] < p[0])
			swap(p[i], p[0]);
	}
	p[0].angle_sort(p.begin() + 1, p.end());
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
	if (allp) {
		rrep(i, sz(p) - 2, 1) {
			if (hull[0].sa2(p.back(), p[i]) != T(0))
				break;
			hull.pb(p[i]);
		}
	}
	return hull;
}
