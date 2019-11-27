#pragma once
#include "util.h"

/*
bool millerRabin(ll n) {
	vl a = { 2, 325, 9375, 28178, 450775, 9780504, 1795265022 };
	if (n == 2)
		return true;
	else if (n < 2 || n % 2 == 0)
		return false;
	ll d = n - 1;
	int r = 0;
	while (d % 2 == 0) {
		d /= 2;
		r++;
	}
	irep(p, a) {
		ll x = powmod(p, d, n);
		if (x <= 1 || x == n - 1)
			continue;
		rep(i, 1, r) {
			x = mulmod(x, x, n);
			if (x == 1)
				return false;
			else if (x == n - 1)
				goto end;
		}
		return false;
	end:;
	}
	return true;
}
*/
