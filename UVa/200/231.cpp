#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	int t;
	vi v;
	whileX(cin >> t && t != -1) {
		vi v = { -t };
		while(cin >> t && t != -1)
			v.pb(-t);

		printX("Test #%d:\n", X);
		printf("  maximum possible interceptions: %d\n", sz(lis(v, true)));
		v.clear();
	}
}
