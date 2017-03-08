#pragma once
#include "util.h"

template <class T>
bool isPrime(T n) {
	if (n < 2) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (T p = 5; p * p <= n; p += 6) {
		if (n % p == 0 || n % (p + 2) == 0)
			return false;
	}
	return true;
}

template <class T>
vector<T> factor(T n) {
	vector<T> result;
	if (n < 0) {
		result.pb(-1);
		n *= -1;
	}
	while (n % 2 == 0) {
		result.pb(2);
		n /= 2;
	}
	while (n % 3 == 0) {
		result.pb(3);
		n /= 3;
	}
	for (T p = 5; p * p <= n; p += 6) {
		while (n % p == 0) {
			result.pb(p);
			n /= p;
		}
		while (n % (p + 2) == 0) {
			result.pb(p + 2);
			n /= p + 2;
		}
	}
	if (n > 1)
		result.pb(n);
	return result;
}

/*
vb sieveVector(int n) {
	n = (n - 1) / 2;
	vb arr(n + 1, true);
	arr[0] = false;
	int p = 1;

	while (2 * p * (p + 1) <= n) {
		if (arr[p]) {
			for (int j = 2 * p * (p + 1); j <= n; j += 2 * p + 1)
				arr[j] = false;
		}
		p++;
	}

	return arr;
}

vi sieve(int n) {
	vb arr = sieveVector(n);
	vi primes = { 2 };
	n = (n - 1) / 2;

	rep(p, 1, sz(arr)) {
		if (arr[p])
			primes.pb(2 * p + 1);
	}

	return primes;
}

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
	irep(p, primepower)
		result *= p.y + 1;
	return result;
}

template <class T>
T sumFactors(const vector<T>& primes) {
	T result = 1;
	map<T, int> primepower = tally(primes);
	irep(p, primepower) {
		T v(1);
		rep(i, 0, p.y) {
			v *= p.x;
			v++;
		}
		result *= v;
	}
	return result;
}

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
