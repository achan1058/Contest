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
