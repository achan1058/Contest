#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, ans = 0, a, b, cur = 0;
	cin >> n;
	rep(i, 0, n) {
		cin >> a >> b;
		cur += b - a;
		ans = max(ans, cur);
	}
	printv(ans);
}
