#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k;
	vd v(2, 0);
	while (cin >> n >> k) {
		if (n >= sz(v)) {
			rep(i, sz(v), n + 1)
				v.pb(v[i - 1] + log10(i));
		}

		double ans = v[n] - v[k] - v[n - k];
		printf("%d\n", int(ans) + 1);
	}
}
