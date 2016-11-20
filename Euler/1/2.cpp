#include <bits/stdc++.h>
#include "header.h"

int ans(int n) {
	int cur = 2, last = 1, sum = 0;
	while (cur <= n) {
		if (cur % 2 == 0)
			sum += cur;
		last += cur;
		swap(cur, last);
	}
	return sum;
}

int main() {
	assert(ans(100) == 2 + 8 + 34);
	printf("%d\n", ans(4000000));
}
