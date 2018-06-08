#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi ans(10001);
	ans[1] = 1;
	rep(i, 2, 10001) {
		ans[i] = ans[i - 1] * i;
		while (ans[i] % 10 == 0)
			ans[i] /= 10;
		ans[i] %= 100000;
	}

	int n;
	while (cin >> n)
		print("%5d -> %d", n, ans[n] % 10);
}
