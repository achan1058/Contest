#include <bits/stdc++.h>
#include "header.h"

int main() {
	vl ans(86);
	ans[1] = ans[2] = 1;
	rep(i, 3, 86)
		ans[i] = ans[i - 1] + ans[i - 2];

	int n;
	while (cin >> n && n != 0)
		print(ans[n]);
}
