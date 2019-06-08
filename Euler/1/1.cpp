#include <bits/stdc++.h>
#include "header.h"

int sum(int n) {
	int total = 0;
	rep(i, 1, n) {
		if (i % 3 == 0 || i % 5 == 0)
			total += i;
	}
	return total;
}

int main() {
	assert(sum(10) == 23);
	printd(sum(1000));
}
