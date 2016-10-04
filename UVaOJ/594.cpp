#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		int t = n, r = 0;
		rep(i, 0, 4) {
			r <<= 8;
			r += t & 0xFF;
			t >>= 8;
		}
		printf("%d converts to %d\n", n, r);
	}
}
