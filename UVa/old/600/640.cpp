#include <bits/stdc++.h>
#include "header.h"

int digitsum(int n) {
	int s = 0;
	while (n > 0) {
		s += n % 10;
		n /= 10;
	}
	return s;
}

int main() {
	vb generated(1100000);
	rep(i, 1, 1000001) {
		if (!generated[i])
			printf("%d\n", i);
		generated[i + digitsum(i)] = true;
	}
}
