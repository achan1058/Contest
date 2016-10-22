#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n) {
		vl v(n);
		ll best = 0;
		irep(l, v)
			cin >> l;
		rep(i, 0, n) {
			ll result = 1;
			rep(j, i, n) {
				result *= v[j];
				best = max(best, result);
			}
		}
		printp("The maximum product is %lld.\n\n", best);
	}
}
