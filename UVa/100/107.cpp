#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll p, q;
	while (cin >> p >> q && (p | q) != 0) {
		if (p == 1) {
			printf("0 1\n");
			continue;
		}
		for (ll depth = 1; ; depth++) {
			ll n = ll(pow(p, 1. / depth) + eps);
			if (ll(pow(n, depth)) == p && ll(pow(n - 1, depth)) == q) {
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
				break;
			}
		}
	}
}
