#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, v;
		cin >> n;
		int mn = inf, mx = -inf;
		rep(i, 0, n) {
			cin >> v;
			mn = min(mn, v);
			mx = max(mx, v);
		}
		printf("%d\n", 2 * (mx - mn));
	}
}
