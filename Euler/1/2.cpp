#include <bits/stdc++.h>
#include "header.h"

int sum(int n) {
	int total = 0, cur = 1, prev = 1;
	while (cur <= n) {
		if (cur % 2 == 0)
			total += cur;
		prev += cur;
		swap(cur, prev);
	}
	return total;
}

int main() {
	assert(sum(100) == 44);
	print("%d", sum(4000000));
}
