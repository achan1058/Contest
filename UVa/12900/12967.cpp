#include <bits/stdc++.h>
#include "header.h"

int main() {
	vl ans(31);
	ans[1] = 1;
	ans[2] = 4;
	rep(i, 3, 31)
		ans[i] = ans[i - 1] * 2 + 4;

	forX() {
		int n;
		cin >> n;
		print(ans[n]);
	}
}
