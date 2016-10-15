#pragma once
#include "point.h"

template<class T>
struct Polygon {
	vector<point<T>> v;
	Polygon(int n = 0) : v(vector<point<T>>(n)) {}
	Polygon(const vector<point<T>>& v_) : v(v_) {}
	//returns number of times inside polygon, 0 on boundary, -1 on non-intersection
	int inPolygon(point<T> p) {
		int n = sz(v), wind2 = 0, q1 = p.above(v[0]);
		forn(i, n) {
			int q2 = p.above(v[(i + 1) % n]);
			if (q1 != q2) {
				T c = p.sa2(v[i], v[(i + 1) % n]);
				if (c > T(0)) wind2++;
				else if (c < T(0)) wind2--;
				else return 0;
			}
			q1 = q2;
		}
		return wind2 != 0 ? abs(wind2) / 2 : -1;
	}

	T sa2() {
		int n = sz(v);
		T result = 0;
		forn(i, n)
			result += v[i].x * v[(i + 1) % n].y - v[(i + 1) % n].x * v[i].y;

		return result;
	}
};
