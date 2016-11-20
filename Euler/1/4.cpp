#include <bits/stdc++.h>
#include "header.h"

int ans(int n) {
	int lower = 1, upper = 10, prod = 0;
	rep(i, 1, n) {
		lower *= 10;
		upper *= 10;
	}
	rep(i, lower, upper) {
		rep(j, i, upper) {
			if (i * j > prod) {
				string str = to_string(i * j), str2 = str;
				reverse(all(str2));
				if (str == str2)
					prod = i * j;
			}
		}
	}
	return prod;
}

int main() {
	assert(ans(2) == 9009);
	printf("%d\n", ans(3));
}
