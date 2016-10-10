#pragma once
#include "point.h"

template<class T>
int sign(T value) { return T(0) < value ? 1 : (value < T(0) ? -1 : 0); }
template<class T>
struct Segment {
	point<T> p1, p2;
	Segment(point<T> p1_ = { 0, 0 }, point<T> p2_ = { 0, 0 }) : p1(p1_), p2(p2_) {}
	int inside(point<T> p) const {
		int dx = sign(p.x - p1.x) * sign(p.x - p2.x), dy = sign(p.y - p1.y) * sign(p.y - p2.y);
		return dx == -1 || dy == -1 ? 1 : (dx == 1 || dy == 1 ? -1 : 0);
	}
	//returns 1 on intersection, 0 on boundary, -1 on non-intersection
	int onSegment(point<T> p) const { return p.sa2(p1, p2) == 0 ? inside(p) : -1; }
	int intersect(Segment l) {
		int s1 = sign(p1.sa2(p2, l.p1)) * sign(p1.sa2(p2, l.p2)), s2 = sign(l.p1.sa2(l.p2, p1)) * sign(l.p1.sa2(l.p2, p2));
		if (s1 != 0 || s2 != 0) return s1 == 1 || s2 == 1 ? -1 : (s1 == -1 && s2 == -1 ? 1 : 0);
		int i1 = inside(l.p1), i2 = inside(l.p2), i3 = l.inside(p1), i4 = l.inside(p2);
		return i1 == 1 || i2 == 1 || i3 == 1 || i4 == 1 ? 1 : (i1 == 0 || i2 == 0 || i3 == 0 || i4 == 0 ? 0 : -1);
	}
	/*
	Point<T> midpoint() {
		return (p1 + p2) / 2;
	}
	Line<T> perpendicularBisector() {
		Point<T> mid = midpoint();
		return Line<T>(p2.y - p1.y, p1.x - p2.x, mid);
	}
	*/
};
