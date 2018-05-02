#pragma once
#include <bits/stdc++.h>
using namespace std;

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
	point operator*(T c) const { return point(x * c, y * c); }
	point operator/(T c) const { return point(x / c, y / c); }
	bool operator<(point p) const { return x < p.x || (x == p.x && y < p.y); } // use above()? is this even needed?
	bool operator==(point p) const { return x == p.x && y == p.y; }

	T dot(point p) const { return x * p.x + y * p.y; }
	T cross(point p) const { return x * p.y - y * p.x; }
	T norm2() const { return x * x + y * y; }
	T dist2(point p) const { return (*this - p).norm2(); }
	T sa2(point p1, point p2) const { return (p1 - *this).cross(p2 - *this); }
	double angle(point p) const { return atan2(p.y - y, p.x - x); }
	double dist(point p) const { return sqrt(dist2(p)); }
	int above(point p) const { return p.y > y || (p.y == y && p.x > x) ? 1 : (p.y < y || p.x < x ? -1 : 0); }

	static point<double> anglePoint(double dist, double angle) {
		return point<double>(dist * cos(angle), dist * sin(angle));
	}

	// return furthest point first
	void angle_sort(typename vector<point<T>>::iterator begin, typename vector<point<T>>::iterator end) {
		sort(begin, end, [&](point<T> p1, point<T> p2) {
			T d = sa2(p1, p2);
			return d > T(0) || (d == T(0) && dist2(p1) < dist2(p2))); // test this
		});
	}
};
template<class T> istream& operator >> (istream& in, point<T>& p) { return in >> p.x >> p.y; }
template<class T> ostream& operator << (ostream& out, const point<T>& p) { return out << p.x << ',' << p.y; } // need this?
typedef point<int> pti;
typedef point<double> ptd;
