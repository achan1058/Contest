#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, b, ans = 0;
		cin >> b >> n;
		rrep(i, b - 1, 0) {
			if (n >= (1 << i)) {
				ans += 1 << i;
				n = (1 << (i + 1)) - n - 1;
			}
		}
		printv(ans);
	}
}
