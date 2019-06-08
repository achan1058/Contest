#include <bits/stdc++.h>
#include "header.h"

inline int pow(int n, int k) {
	int ans = 1;
	rep(i, 0, k)
		ans *= n;
	return ans;
}

int digit_sum(int n, int p) {
	int ans = 0;
	while (n > 0) {
		ans += pow(n % 10, p);
		n /= 10;
	}
	return ans;
}

int sum(int p) {
	int ans = 0;
	rep(i, 2, pow(10, p + 1)) {
		if (digit_sum(i, p) == i)
			ans += i;
	}
	return ans;
}

int main() {
	assert(sum(4) == 19316);
	print(sum(5));
}
