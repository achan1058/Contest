#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi ans(11);
	ans[0] = ans[1] = 1;
	rep(i, 2, 11) {
		rep(j, 0, i)
			ans[i] += ans[j] * ans[i - 1 - j];
	}
	int n;
	whileX(cin >> n)
		printX(ans[n]);
}
