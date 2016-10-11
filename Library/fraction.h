#pragma once
#include "number_theory.h"

template<class T>
class Fraction {
	T n, d;
	int sign;
	void reduce() {
		if (d < 0) { d *= -1; sign *= -1; }
		if (n < 0) { n *= -1; sign *= -1; }
		T g = gcd(n, d); n /= g; d /= g;
	}
	int compareIgnoreSign(const Fraction& f) const {
		T det = n * f.d - f.n * d;
		return det > 0 ? 1 : (det < 0 ? -1 : 0);
	}
	int compare(const Fraction& f) const {
		return sign > f.sign ? 1 : (sign < f.sign ? -1 : compareIgnoreSign(f) * sign);
	}
public:
	Fraction(const T& n_ = 0, const T& d_ = 1) : n(n_), d(d_), sign(n_ == 0 ? 0 : 1) {
		reduce();
	}
	Fraction& operator+=(const Fraction& f) {
		T g = gcd(n, d), d1 = d / g, d2 = f.d / g;
		n *= d2; d *= d2;
		n += f.sign * d1 * f.n;
		reduce();
		return *this;
	}
	Fraction& operator-=(const Fraction& f) {
		T g = gcd(n, d), d1 = d / g, d2 = f.d / g;
		n *= d2; d *= d2;
		n -= f.sign * d1 * f.n;
		reduce();
		return *this;
	}
	Fraction& operator*=(const Fraction& f) {
		sign *= f.sign;
		n *= f.n; d *= f.d;
		reduce();
		return *this;
	}
	Fraction& operator/=(const Fraction& f) {
		sign *= f.sign;
		n *= f.d; d *= f.n;
		reduce();
		return *this;
	}
	Fraction operator+(const Fraction& f) const { Fraction r = *this; return r += f; }
	Fraction operator-(const Fraction& f) const { Fraction r = *this; return r -= f; }
	Fraction operator*(const Fraction& f) const { Fraction r = *this; return r *= f; }
	Fraction operator/(const Fraction& f) const { Fraction r = *this; return r /= f; }
	bool operator<(const Fraction& f) const { return compare(f) < 0; }
	bool operator>(const Fraction& f) const { return compare(f) > 0; }
	bool operator<=(const Fraction& f) const { return compare(f) <= 0; }
	bool operator>=(const Fraction& f) const { return compare(f) >= 0; }
	bool operator==(const Fraction& f) const { return compare(f) == 0; }
	bool operator!=(const Fraction& f) const { return compare(f) != 0; }
	operator double() const { return double(n) * sign / d; }
	T num() const { return n * sign; }
	T den() const { return d; }
};
template<class T>
istream& operator>>(istream& in, Fraction<T>& f) { T n, d; in >> n >> d; f = Fraction<T>(n, d); return in; }
