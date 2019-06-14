#include <bits/stdc++.h>
#include "fraction.h"
#include "header.h"

int main() {
	ll l, d, n;
	while (cin >> l >> n >> d && (l | d | n) != 0) {
		fl best = inf;
		rep(i, 1, n + 1) {
			ll len = d * i;
			ll num = (len + l - 1) / l * l;
			fl cur(num, i);
			best = min(best, cur);
		}
		print("%lld/%lld", best.num(), best.den());
	}
}
