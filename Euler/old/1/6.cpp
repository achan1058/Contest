#include <bits/stdc++.h>
#include "header.h"

int ans(int n) {
	int sq = 0, ss = 0;
	rep(i, 1, n + 1) {
		sq += i * i;
		ss += i;
	}
	return ss * ss - sq;
}

int main() {
	assert(ans(10) == 2640);
	printf("%d\n", ans(100));
}
