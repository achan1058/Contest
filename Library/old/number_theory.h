#pragma once
#include <bits/stdc++.h>
using namespace std;

ll mulmod(ll a, ll b, ll m) {
	ll r = 0;
	a %= m;
	b %= m;
	while (b > 0) {
		if (b & 1)
			r = (r + a) % m;
		a = (a << 1) % m;
		b >>= 1;
	}
	return r;
}

ll powmod(ll b, ll e, ll m) {
	ll r = 1;
	while (e > 0) {
		if (e & 1)
			r = mulmod(r, b, m);
		b = mulmod(b, b, m);
		e >>= 1;
	}
	return r;
}
