#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k, ans = 0, prev = inf, v;
	cin >> n >> k;
	rep(i, 0, n) {
		cin >> v;
		if (v == 0 || (i >= k && v != prev))
			break;
		prev = v;
		ans++;
	}
	printv(ans);
}
