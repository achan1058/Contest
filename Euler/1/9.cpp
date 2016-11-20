#include <bits/stdc++.h>
#include "header.h"

int ans(int n) {
	rep(i, 1, n + 1) {
		rep(j, i, n + 1) {
			int k = n - i - j;
			if (k < j)
				continue;
			if (i * i + j * j == k * k)
				return i * j * k;
		}
	}
}


int main() {
	assert(ans(12) == 60);
	printf("%d\n", ans(1000));
}
