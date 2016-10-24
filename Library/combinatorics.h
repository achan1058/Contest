#pragma once
#include "header.h"

vl factTable(int n, ll m = 0) {
	vl result(1, 1);
	rep(i, 1, n + 1) {
		result.pb(result.back() * i);
		if (m != 0) result.back() %= m;
	}
	return result;
}

vvl binomialTable(int n, ll m = 0) {
	vvl result(n + 1);
	result[0].pb(1);
	rep(i, 1, n + 1) {
		result[i].resize(i + 1);
		result[i][0] = result[i][i] = 1;
		rep(j, 1, i) {
			result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
			if (m != 0) result[i][j] %= m;
		}
	}
	return result;
}

ll binomial(int n, int r) {
	ll result = 1;
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

ll multinomial(const vi& r) {
	ll result = 1;
	int n = 0;
	irep(v, r) {
		n += v;
		result *= binomial(n, v);
	}
	return result;
}
