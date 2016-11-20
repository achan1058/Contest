#include <bits/stdc++.h>
#include "header.h"

ll ans(int n) {
	int prod = 1;
	rep(i, 1, n) {
		int g = gcd(prod, i);
		prod = prod / g * i;
	}
	return prod;
}

int main() {
	assert(ans(10) == 2520);
	printf("%d\n", ans(20));
}
