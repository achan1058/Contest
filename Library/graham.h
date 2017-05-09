#pragma once
#include "point.h"

// CHANGES POINT ORDER
template<class T>
vector<point<T>> graham(vector<point<T>>& p, bool allp = false) {
	int n = p.size();
	if (n < 3)
		return p;
	for (int i = 1; i < n; i++) {
		if (p[i] < p[0])
			swap(p[i], p[0]);
	}
	p[0].angle_sort(p.begin() + 1, p.end());
	vector<point<T>> hull = { p[0], p[1] };
	for (int i = 2; i < n; i++) {
		while (hull.size() > 1) {
			T d = hull[hull.size() - 2].sa2(hull[hull.size() - 1], p[i]);
			if (d > T(0) || (d == T(0) && allp))
				break;
			hull.pop_back();
		}
		hull.push_back(p[i]);
	}
	if (allp) {
		for (int i = n - 2; i > 0; i--) {
			if (hull[0].sa2(p.back(), p[i]) != T(0))
				break;
			hull.push_back(p[i]);
		}
	}
	return hull;
}
