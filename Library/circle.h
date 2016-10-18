#pragma once
#include "point.h"
#include "triangle.h"

template<class T>
struct Circle {
	point<T> c; T r;
	Circle(T x_ = 0, T y_ = 0, T r_ = 0) : c({ x_, y_ }), r(r_) {}
	Circle(point<T> c_, T r_ = 0) : c(c_), r(r_) {}
	Circle(point<T> p1, point<T> p2, point<T> p3) {
		point<T> a = p2 - p1, b = p3 - p1;
		T d = 2 * a.cross(b);
		c.x = (a.norm2() * b.y - b.norm2() * a.y) / d + p1.x;
		c.y = (b.norm2() * a.x - a.norm2() * b.x) / d + p1.y;
		r = p1.dist(c);
	}
#ifdef TRIANGLE
	//check this
	static Circle<T> inscribedCircle(point<T> p1, point<T> p2, point<T> p3) {
		T a = p2.dist(p3), b = p1.dist(p3), c = p1.dist(p2);
		return Circle<T>((a * p1.x + b * p2.x + c * p3.x) / (a + b + c), (a * p1.y + b * p2.y + c * p3.y) / (a + b + c), sss_area(a, b, c) / (a + b + c));
	}
#endif
	//returns 1 on inside, 0 on boundary, -1 on non-intersection
	int inCircle(point<T> p) const {
		T d = r * r - c.dist2(p);
		return d > T(0) ? 1 : (d < T(0) ? -1 : 0);
	}
};
