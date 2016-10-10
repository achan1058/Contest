#include <bits/stdc++.h>
#include "double.h"
#include "binary_search.h"

Double s;
Double eval(ll n) {
	return Double(log(n) / log(n - 1)) - s;
}

int main() {
	ll p, q;

	while (cin >> p >> q && (p | q) != 0) {
		ll n, depth;
		if (p == 1) {
			n = 1;
			depth = 0;
		} else if (q == 1) {
			n = 2;
			s = log(p) / log(2);
			depth = (ll)(s);
		} else if (q == p - 1) {
			n = p;
			depth = 1;
		} else {
			s = log(p) / log(q);
			n = binarySearch<ll, Double>(eval, 3, inf);
			depth = (ll)(Double(log(p) / log(n)));
		}

		ll total_h = 0, total_n = 0, cur_h = p;
		rep(i, 0, depth) {
			total_n *= (n - 1);
			total_n += 1;
			total_h += cur_h;
			cur_h /= n;
			cur_h *= n - 1;
		}

		total_h += cur_h;
		printf("%lld %lld\n", total_n, total_h);
	}
}
