#include <bits/stdc++.h>
#include "header.h"

int ans(int n) {
	int sum = 0;
	rep(i, 1, n) {
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	return sum;
}

int main() {
	assert(ans(10) == 23);
	printf("%d\n", ans(1000));
}