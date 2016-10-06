#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	vl ans(2, 1);
	rep(i, 1, 80)
		ans.pb(ans[i] + ans[i - 1]);
	while (cin >> n && n != 0)
		printf("%lld\n", ans[n]);
}
