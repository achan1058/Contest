#pragma once
#include "line.h"

template<class T>
struct Segment {
	point<T> p1, p2;
private:
	int sgn(T val) const { return (T(0) < val) - (val < T(0)); }
	// helper function to check whether the target point is in the bounds of the segment endpoints
	// does NOT check whether point is actually inside the segment
	int inside(point<T> p) const {
		int dx = sgn(p.x - p1.x) * sgn(p.x - p2.x), dy = sgn(p.y - p1.y) * sgn(p.y - p2.y);
		return dx == -1 || dy == -1 ? 1 : (dx == 1 || dy == 1 ? -1 : 0);
	}
public:
	Segment(T x1 = 0, T y1 = 0, T x2 = 0, T y2 = 0) : p1({ x1, y1 }), p2({ x2, y2 }) {}
	Segment(point<T> p1_, point<T> p2_ = { 0, 0 }) : p1(p1_), p2(p2_) {}
	//returns 1 on intersection, 0 on boundary, -1 on non-intersection
	int onSegment(point<T> p) const { return p.sa2(p1, p2) == T(0) ? inside(p) : -1; }
	int intersect(Segment l) {
		int s1 = sgn(p1.sa2(p2, l.p1)) * sgn(p1.sa2(p2, l.p2)), s2 = sgn(l.p1.sa2(l.p2, p1)) * sgn(l.p1.sa2(l.p2, p2));
		if (s1 != 0 || s2 != 0) return s1 == 1 || s2 == 1 ? -1 : (s1 == -1 && s2 == -1 ? 1 : 0);
		int i1 = inside(l.p1), i2 = inside(l.p2), i3 = l.inside(p1), i4 = l.inside(p2);
		return i1 == 1 || i2 == 1 || i3 == 1 || i4 == 1 ? 1 : (i1 == 0 || i2 == 0 || i3 == 0 || i4 == 0 ? 0 : -1);
	}
#ifdef LINE
	point<T> closest(point<T> p) {
		point<T> perp = Line<T>(p1, p2).closest(p);
		T d0 = p.dist2(perp), d1 = p.dist2(p1), d2 = p.dist2(p2);
		if (d0 < d1 && d0 < d2 && inside(perp) >= 0)
			return perp;
		else if (d1 < d2)
			return p1;
		else
			return p2;
	}
#endif
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
