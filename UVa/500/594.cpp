#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		int ans = 0, t = n;
		rep(i, 0, 4) {
			ans <<= 8;
			ans += t & 0xFF;
			t >>= 8;
		}
		print("%d converts to %d", n, ans);
	}
}
