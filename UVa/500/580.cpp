#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi ans(31);
	ans[0] = ans[1] = 1;
	ans[2] = 2;
	rep(i, 3, 31)
		ans[i] = ans[i - 1] + ans[i - 2] + ans[i - 3];
	rrep(i, 30, 3)
		ans[i] = (1 << i) - ans[i] - ans[i - 1] - ans[i - 2];
	ans[1] = ans[2] = 0;

	int n;
	while (cin >> n && n != 0)
		print(ans[n]);
}
