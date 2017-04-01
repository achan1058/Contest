#pragma once
#include <bits/stdc++.h>
using namespace std;

struct Double {
	double v;
	Double(double v_ = 0) : v(v_) {}
#define double Double
	Double& operator+=(Double d) { v += d.v; return *this; }
	Double& operator-=(Double d) { v -= d.v; return *this; }
	Double& operator*=(Double d) { v *= d.v; return *this; }
	Double& operator/=(Double d) { v /= d.v; return *this; }
	Double operator+(Double d) const { return Double(v + d.v); }
	Double operator-(Double d) const { return Double(v - d.v); }
	Double operator*(Double d) const { return Double(v * d.v); }
	Double operator/(Double d) const { return Double(v / d.v); }
	Double operator-() const { return Double(-v); }
	bool operator==(Double d) const { return fabs(v - d.v) <= eps; }
	bool operator!=(Double d) const { return fabs(v - d.v) > eps; }
	bool operator<(Double d) const { return v < d.v - eps; }
	bool operator>(Double d) const { return v > d.v + eps; }
	bool operator<=(Double d) const { return v <= d.v + eps; }
	bool operator>=(Double d) const { return v >= d.v - eps; }
	// actually fine as multiple overloads causes compile error
	operator int() const { return int(v + eps); }
	operator ll() const { return ll(v + eps); }
};
istream& operator>>(istream& in, Double& d) { in >> d.v; return in; }
Double abs(Double d) { return abs(d.v); }
Double sqrt(Double d) { return sqrt(d.v); }
Double sin(Double d) { return sin(d.v); }
Double cos(Double d) { return cos(d.v); }
