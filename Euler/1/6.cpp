#include <bits/stdc++.h>
#include "header.h"

int diff(int n) {
	int sum_sq = 0, sum = 0;
	rep(i, 1, n + 1) {
		sum_sq += i * i;
		sum += i;
	}
	return sum * sum - sum_sq;
}

int main() {
	assert(diff(10) == 2640);
	print(diff(100));
}
