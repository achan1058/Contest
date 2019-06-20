#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi ans(1000001);
	rep(i, 2, 1000001) {
		if (ans[i] != 0)
			continue;
		for (int j = i; j <= 1000000; j += i)
			ans[j] = ans[j / i] + 1;
	}
	rep(i, 2, 1000001)
		ans[i] += ans[i - 1];

	int n;
	while (cin >> n)
		print(ans[n]);
}
