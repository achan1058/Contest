#include <bits/stdc++.h>
#include "header.h"

int main() {
	vl ans(81);
	ans[0] = ans[1] = 1;
	rep(i, 2, 81)
		ans[i] = ans[i - 1] + ans[i - 2];

	int n;
	while (cin >> n && n != 0)
		print(ans[n]);
}
