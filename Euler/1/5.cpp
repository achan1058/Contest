#include <bits/stdc++.h>
#include "header.h"

int prod(int n) {
	int ans = 1;
	rep(i, 1, n + 1) {
		ans /= gcd(ans, i);
		ans *= i;
	}
	return ans;
}

int main() {
	assert(prod(10) == 2520);
	print(prod(20));
}
