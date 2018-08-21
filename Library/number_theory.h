#pragma once
#include <bits/stdc++.h>
using namespace std;

template <class T>
T powmod(T b, T e, T m) {
	T r = 1;
	while (e > 0) {
		if (e & 1) {
			r *= b;
			r %= m;
		}
		b *= b;
		b %= m;
		e >>= 1;
	}
	return r;
}

// returns gcd, a0, b0 such that a0*a + b0*b = gcd
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
