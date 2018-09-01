#pragma once
#include "point.h"

template<class T>
struct Polygon {
	vector<point<T>> v;
	Polygon(int n = 0) : v(vector<point<T>>(n)) {}
	Polygon(const vector<point<T>>& v_) : v(v_) {}
	//returns number of times inside polygon, 0 on boundary, -1 on non-intersection
	int inPolygon(const point<T>& p) const {
		int n = v.size(), wind2 = 0, q1 = p.above(v[0]);
		for (int i = 0; i < n; i++) {
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

	T sa2() const {
		int n = v.size();
		T result = 0;
		for (int i = 0; i < n; i++)
			result += v[i].x * v[(i + 1) % n].y - v[(i + 1) % n].x * v[i].y;

		return result;
	}

	point<T> centroid() const {
		int n = v.size();
		T area = sa2(), x = 0, y = 0;
		for (int i = 0; i < n; i++) {
			x += (v[i].x * v[(i + 1) % n].y - v[(i + 1) % n].x * v[i].y) * (v[i].x + v[(i + 1) % n].x);
			y += (v[i].x * v[(i + 1) % n].y - v[(i + 1) % n].x * v[i].y) * (v[i].y + v[(i + 1) % n].y);
		}
		return point<T>(x / area / 3, y / area / 3);
	}

	double dist() const {
		int n = sz(v);
		double d = 0;
		for (int i = 0; i < n; i++)
			d += v[i].dist(v[(i + 1) % n]);
		return d;
	}
};
