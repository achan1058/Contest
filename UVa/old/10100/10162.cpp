#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi ans(100);
	ans[0] = 0;
	rep(i, 1, 100) {
		int prod = i;
		rep(j, 1, i)
			prod = (prod * i) % 10;
		ans[i] = (ans[i - 1] + prod) % 10;
	}

	string s;
	while (cin >> s && s != "0") {
		int n;
		if (sz(s) == 1)
			n = s.back() - '0';
		else
			n = s.back() - '0' + (s[sz(s) - 2] - '0') * 10;
		printf("%d\n", ans[n]);
	}
}
