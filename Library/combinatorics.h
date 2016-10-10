#pragma once
#include "header.h"

template <class T>
vector<T> factTable(int n, T m = 0) {
	vector<T> result(1, T(1));
	rep(i, 1, n + 1) {
		result.pb(result.back() * T(i));
		if (T(0) != m) result.back() %= m;
	}
	return result;
}

template <class T>
vector<vector<T>> pascalTable(int n, T m = 0) {
	vector<vector<T>> result(n + 1);
	result[0].pb(T(1));
	rep(i, 1, n + 1) {
		result[i].resize(i + 1);
		result[i][0] = result[i][i] = T(1);
		rep(j, 1, i) {
			result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
			if (T(0) != m) result[i][j] %= m;
		}
	}
	return result;
}

template <class T>
T nCr(int n, int r) {
	T result = 1;
	if (r > n / 2)
		r = n - r;
	if (r < 0)
		return 0;
	rep(i, 0, r) {
		result *= n - i;
		result /= i + 1;
	}
	return result;
}

template <class T>
T multinomial(const vi& r) {
	T result = 1;
	int n = 0;
	irep(v, r) {
		n += v;
		result *= nCr<T>(n, v);
	}
	return result;
}
