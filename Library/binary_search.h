#pragma once
#include <bits/stdc++.h>
using namespace std;

// Finds x such that func(x) = 0. Returns left most of such x if func is monotone.
template<class T, class U = double>
T binarySearch(U func(T value), T m = 0, T M = inf, T bound = eps, bool precise = true, T not_found = -inf) {
	auto sgn = [](T v) { return (T(0) < v) - (v < T(0)); };
	int m_sign = sgn(func(m));
	T mid = (m + M) / 2;
	if (m_sign == 0)
		return m;
	else if (m_sign == sgn(func(M)))
		return not_found;
	do {
		int mid_sign = sgn(func(mid));
		if (mid_sign == m_sign)
			m = mid;
		else
			M = mid;
		mid = (m + M) / 2;
	} while (bound < mid - m);
	return (sgn(func(M)) == 0 || !precise ? M : not_found);
}
