#pragma once
#include "header.h"

template <class T>
T power(T b, T e, T m = 0) {
	T r = T(1);
	while (e > T(0)) {
		if ((e & T(1)) == T(1)) {
			r *= b;
			if (m != T(0)) r %= m;
		}
		b *= b;
		e >>= T(1);
		if (m != T(0)) b %= m;
	}
	return r;
}

// returns gcd, a0, b0 such that a0*a + b0*b = gcd, requires b != 0
template <class T>
tuple<T, T, T> egcd(T a, T b) {
	T a0 = 1, b0 = 0, a1 = 0, b1 = 1;
	while (b != 0) {
		T q = a / b;
		a0 -= q * a1;
		b0 -= q * b1;
		a -= q * b;
		swap(a0, a1);
		swap(b0, b1);
		swap(a, b);
	}

	if (a >= 0)
		return make_tuple(a, a0, b0);
	else
		return make_tuple(-a, -a0, -b0);
}

ll mulmod(ll a, ll b, ll m) {
	ll r = 0;
	a %= m;
	b %= m;
	while (b > 0) {
		if (b & 1)
			r = (r + a) % m;
		a = (a << 1) % m;
		b >>= 1;
	}
	return r;
}

ll powmod(ll b, ll e, ll m) {
	ll r = 1;
	while (e > 0) {
		if (e & 1)
			r = mulmod(r, b, m);
		b = mulmod(b, b, m);
		e >>= 1;
	}
	return r;
}
