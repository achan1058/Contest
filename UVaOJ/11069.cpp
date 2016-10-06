#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	vi ans = { 1, 1, 2 };
	rep(i, 3, 77)
		ans.pb(ans[i - 2] + ans[i - 3]);
	while (cin >> n)
		printf("%d\n", ans[n]);
}
