#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, p, q, ans = 0;
	cin >> n;
	rep(i, 0, n) {
		cin >> p >> q;
		ans += (p + 2 <= q ? 1 : 0);
	}
	print(ans);
}
