#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int l, n, v;
		cin >> l >> n;
		int mn = 0, mx = 0;
		rep(i, 0, n) {
			cin >> v;
			mn = max(mn, min(v, l - v));
			mx = max(mx, max(v, l - v));
		}
		printf("%d %d\n", mn, mx);
	}
}
