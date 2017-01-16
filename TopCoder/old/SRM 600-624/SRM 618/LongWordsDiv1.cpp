#include <bits/stdc++.h>
#include "header.h"

class LongWordsDiv1 {
	vl num;
	ll mod = 1000000007;
	vector<vl> binomgrid;

	ll binomial(int n, int k) {
		if (binomgrid[n][k] != -1)
			return binomgrid[n][k];
		if (k == 0 || k == n)
			binomgrid[n][k] = 1;
		else
			binomgrid[n][k] = (binomial(n - 1, k - 1) + binomial(n - 1, k)) % mod;
		return binomgrid[n][k];
	}

	ll counthelp(int n) {
		if (num[n] != -1)
			return num[n];
		num[n] = counthelp(n - 1);
		rep(i, 1, n - 1) {
			int j = n - i - 1;
			ll t = counthelp(i) * counthelp(j) % mod;
			t = t * binomial(n - 1, i) % mod;
			num[n] = (num[n] + t) % mod;
		}

		num[n] = num[n] * n % mod;
		return num[n];
	}
public:
	int count(int n) {
		num.resize(n + 1, -1);
		binomgrid = ml(n + 1, n + 1, -1);
		num[0] = num[1] = 1;
		ll x = counthelp(n);
		return (int)(x);
	}
};
