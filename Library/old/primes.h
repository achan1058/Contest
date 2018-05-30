#pragma once
#include "util.h"

/*

template <class T>
int fastIsPrime(T n, const vi& primes) {
	if (n < T(2))
		return 0;
	irep(p, primes) {
		if (T(p) * T(p) > n)
			return 1;
		if (n % T(p) == 0)
			return 0;
	}
	return -1;
}

template <class T>
vector<T> fastFactor(T n, const vi& primes) {
	vector<T> result;
	if (n < T(0)) {
		result.pb(T(-1));
		n *= T(-1);
	}
	irep(p, primes) {
		if (T(p) * T(p) > n)
			break;
		while (n % T(p) == 0) {
			result.pb(T(p));
			n /= T(p);
		}
	}
	if (n > T(1))
		result.pb(T(n));
	return result;
}
*/
template <class T>
T numFactors(const vector<T>& primes) {
	T result = 1;
	map<T, int> primepower = tally(primes);
	for(auto& p : primepower)
		result *= p.second + 1;
	return result;
}

template <class T>
T sumFactors(const vector<T>& primes) {
	T result = 1;
	map<T, int> primepower = tally(primes);
	for(auto& p : primepower) {
		T v(1);
		for (int i = 0; i < p.second; i++) {
			v *= p.first;
			v++;
		}
		result *= v;
	}
	return result;
}
/*
template <class T>
T eulerPhi(const vector<T>& primes) {
	T result = 1;
	map<T, int> primepower = tally(primes);
	irep(p, primepower) {
		result *= p.x - 1;
		rep(i, 1, p.y)
			result *= p.x;
	}
	return result;
}

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
