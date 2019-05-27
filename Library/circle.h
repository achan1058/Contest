#pragma once
#include "point.h"

template<class T>
struct Circle {
	point<T> c; T r2;
	inline double radius() const { return sqrt(r2); }
	// Test this, brackets needed? Can I use below with brackets w/o first construction a point?
	Circle(T x_ = 0, T y_ = 0, T r_ = 0, bool r2_ = false) : c({ x_, y_ }), r2(r2_ ? r_ : r_ * r_) {}
	// Test this
	Circle(const point<T>& c_, T r_ = 0, bool r2_ = false) : c(c_), r2(r2_ ? r_ : r_ * r_) {}
	Circle(const point<T>& p1, const point<T>& p2, const point<T>& p3) {
		point<T> a = p2 - p1, b = p3 - p1;
		T d = 2 * a.cross(b);
		c.x = (a.norm2() * b.y - b.norm2() * a.y) / d + p1.x;
		c.y = (b.norm2() * a.x - a.norm2() * b.x) / d + p1.y;
		r2 = p1.dist2(c);
	}
	// Test this
	//returns 1 on inside, 0 on boundary, -1 on non-intersection
	int inCircle(const point<T>& p) const {
		T d = r2 - c.dist2(p);
		return (T(0) < d) - (d < T(0));
	}
};
