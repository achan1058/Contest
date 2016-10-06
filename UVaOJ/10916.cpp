#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi ans;
	int n, fact = 1;
	double bitsz = 4, factsz = 0;
	rep(i, 0, 21) {
		while (factsz <= bitsz) {
			fact++;
			factsz += log2(fact);
		}
		ans.pb(fact - 1);
		bitsz *= 2;
	}
	while (cin >> n && n != 0) {
		n -= 1960;
		n /= 10;
		printf("%d\n", ans[n]);
	}
}
