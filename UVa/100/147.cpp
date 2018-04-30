#include <bits/stdc++.h>
#include "header.h"

int main() {
	double dollar;
	vi bills = { 5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000 };
	vl ans(300 * 20 + 1);
	ans[0] = 1;
	irep(b, bills) {
		b /= 5;
		rep(i, b, 300 * 20 + 1)
			ans[i] += ans[i - b];
	}

	while (cin >> dollar && dollar != 0) {
		int count = dollar * 20 + eps;
		print("%6.2f%17lld", dollar, ans[count]);
	}
}
