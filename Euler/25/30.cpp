#include <bits/stdc++.h>
#include "header.h"

int powsum(int n) {
	int ans = 0;
	while (n > 0) {
		int t = n % 10;
		ans += t * t * t * t * t;
		n /= 10;
	}
	return ans;
}
int main() {
	int total = 0;
	rep(i, 2, 1000000) {
		if (i == powsum(i))
			total += i;
	}
	printf("%d\n", total);
}
