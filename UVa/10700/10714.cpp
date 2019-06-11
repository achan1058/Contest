#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int l, n, mn = 0, mx = 0, v;
		cin >> l >> n;
		rep(i, 0, n) {
			cin >> v;
			mn = max(mn, min(v, l - v));
			mx = max(mx, max(v, l - v));
		}
		print(mn, mx);
	}
}
