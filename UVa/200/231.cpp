#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	int X = 1, t;
	vi v;
	while (cin >> t) {
		if (t != -1) {
			v.pb(-t);
			continue;
		}

		if (v.empty())
			return 0;

		printf("%sTest #%d:\n", X > 1 ? "\n" : "", X);
		printf("  maximum possible interceptions: %d\n", sz(lis(v, true)));
		v.clear();
		X++;
	}
}
