#pragma once
#include "point.h"

// CHANGES POINT ORDER!! returns dist2, O(n^2 worst case, but fast in practice)
template<class T>
tuple<T, point<T>, point<T>> closestPair(vector<point<T>>& points, T infinity = inf) {
	int n = sz(points);
	sort(all(points));
	point<T> p1, p2;
	int t = 0;
	T md2 = infinity;
	rep(i, 0, n) {
		while ((points[i].x - points[t].x) * (points[i].x - points[t].x) > md2)
			t++;
		rep(j, t, i) {
			T nd = points[i].dist2(points[j]);
			if (nd < md2) {
				md2 = nd;
				p1 = points[j];
				p2 = points[i];
			}
		}
	}
	return make_tuple(md2, p1, p2);
}
