#pragma once
#include "header.h"

template<class T>
struct point {
	T x, y;
	point(T x_ = 0, T y_ = 0) : x(x_), y(y_) {}
	point& operator+=(point p) { x += p.x; y += p.y; return *this; }
	point& operator-=(point p) { x -= p.x; y -= p.y; return *this; }
	point& operator*=(T c) { x *= c; y *= c; return *this; }
	point& operator/=(T c) { x /= c; y /= c; return *this; }
	point operator+(point p) const { return point(x + p.x, y + p.y); }
	point operator-(point p) const { return point(x - p.x, y - p.y); }
	point operator*(point c) const { return point(x * c, y * c); }
	point operator/(point c) const { return point(x / c, y / c); }
	bool operator<(point p) const { return x < p.x || (x == p.x && y < p.y); }
	bool operator==(point p) const { return x == p.x && y == p.y; }

	T dot(point p) const { return x * p.x + y * p.y; }
	T cross(point p) const { return x * p.y - y * p.x; }
	T norm2() const { return x * x + y * y; }
	T dist2(point p) const { return (*this - p).norm2(); }
	T sa2(point p1, point p2) const { return (p1 - *this).cross(p2 - *this); }
	double dist(point p) const { return sqrt(dist2(p)); }
	int above(point p) const { return p.y > y || (p.y == y && p.x > x) ? 1 : (p.y < y || p.x < x ? -1 : 0); }
};
template<class T>
istream& operator>>(istream& in, point<T>& p) { return in >> p.x >> p.y; }
typedef point<int> pti;
typedef point<double> ptd;
