#pragma once
#include "util.h"

template<class T, class U = double>
T binarySearch(U func(T value), T m = -inf, T M = inf, T bound = eps, bool precise = false) {
	int m_sign = sgn(func(m)), M_sign = sgn(func(M));
	if (m_sign == 0)
		return m;
	else if (M_sign == 0)
		return M;
	else if (m_sign == M_sign)
		return inf;
	while (bound < M - m) {
		T mid = (m + M) / 2;
		int mid_sign = sgn(func(mid));
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
