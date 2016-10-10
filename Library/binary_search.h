#pragma once
#include "header.h"

template<class T>
int sign(T value) { return T(0) < value ? 1 : (value < T(0) ? -1 : 0); }
template<class T, class U = double>
T binarySearch(U func(T value), T m = -inf, T M = inf, T bound = eps, bool precise = false) {
	int m_sign = sign(func(m)), M_sign = sign(func(M));
	if (m_sign == 0)
		return m;
	else if (M_sign == 0)
		return M;
	else if (m_sign == M_sign)
		return inf;
	while (bound < M - m) {
		T mid = (m + M) / 2;
		int mid_sign = sign(func(mid));
		if (mid_sign == 0)
			return mid;
		else if (mid_sign == m_sign)
			m = mid;
		else
			M = mid;
	}

	if (precise)
		return inf;
	else
		return (M + m) / 2;
}
