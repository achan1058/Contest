#pragma once
#include "point.h"
#include "triangle.h"

template<class T>
struct Circle {
	point<T> c; T r2;
	inline double radius() const { return sqrt(r2); }
	Circle(const T& x_ = 0, const T& y_ = 0, const T& r_ = 0, bool r2 = false) : c({ x_, y_ }), r2(r2 ? r_ : r_ * r_) {}
	Circle(const point<T>& c_, const T& r_ = 0, bool r2 = false) : c(c_), r2(r2 ? r_ : r_ * r_) {}
	Circle(const point<T>& p1, const point<T>& p2, const point<T>& p3) {
		point<T> a = p2 - p1, b = p3 - p1;
		T d = 2 * a.cross(b);
		c.x = (a.norm2() * b.y - b.norm2() * a.y) / d + p1.x;
		c.y = (b.norm2() * a.x - a.norm2() * b.x) / d + p1.y;
		r2 = p1.dist2(c);
	}
#ifdef TRIANGLE
	//check this
	static Circle<double> inscribedCircle(point<T> p1, point<T> p2, point<T> p3) {
		double a = p2.dist(p3), b = p1.dist(p3), c = p1.dist(p2);
		return Circle<double>((a * p1.x + b * p2.x + c * p3.x) / (a + b + c), (a * p1.y + b * p2.y + c * p3.y) / (a + b + c), sss_area(a, b, c) / (a + b + c));
	}
#endif
	//returns 1 on inside, 0 on boundary, -1 on non-intersection
	int inCircle(const point<T>& p) const {
		T d = r2 - c.dist2(p);
		return d > T(0) ? 1 : (d < T(0) ? -1 : 0);
	}
};
