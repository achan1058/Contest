#pragma once
#include "point.h"

// records ax + by = c
template<class T>
struct Line {
public:
	T a, b, c;
	Line(T a_ = 0, T b_ = 0, T c_ = 0) : a(a_), b(b_), c(c_) {}
	Line(point<T> p1, point<T> p2) : a(p2.y - p1.y), b(p1.x - p2.x) { c = a * p1.x + b * p1.y; }
	Line(T dx, T dy, point<T> p) : a(-dy), b(dx) { c = a * p.x + b * p.y; }
	Line perp(point<T> p) { return Line(a, b, p); }
	// need this?
	void normalize() {
		T m = abs(a) >= abs(b) ? a : b;
		a /= m; b /= m; c /= m;
	}
	point<T> intersect(Line<T> l) const {
		T det = a * l.b - l.a * b;
		if (det == T(0)) {
			if (a * l.c - l.a * c == T(0) && b * l.c - l.b * c == T(0)) return point<T>(inf, inf);
			else return point<T>(-inf, -inf);
		}
		return point<T>((c * l.b - l.c * b) / det, (a * l.c - l.a * c) / det);
	}
	point<T> closest(point<T> p) {
		return intersect(perp(p));
	}
};
