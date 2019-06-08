#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b, c, d, n, ans = 0;
	cin >> a >> b >> c >> d >> n;
	rep(i, 1, n + 1) {
		if (i % a == 0 || i % b == 0 || i % c == 0 || i % d == 0)
			ans++;
	}
	printd(ans);
}
