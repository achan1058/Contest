#include <bits/stdc++.h>
#include "header.h"

int main() {
	vl ans(20000001);
	ans[1] = 1;

	rep(i, 2, 20000001) {
		if (ans[i] == 0) {
			ll mul = 1;
			for (ll p = i; p < 20000001; p *= i) {
				mul = mul * i + 1;
				for (int j = 1; j * p < 20000001; j++) {
					if (j % p == 0)
						continue;
					ans[j * p] = ans[j] * mul;
				}
			}
		}
	}

	rep(i, 3, 20000001)
		ans[i] += ans[i - 1];
	int n;
	while (cin >> n && n != 0)
		print("%lld", ans[n]);
}
