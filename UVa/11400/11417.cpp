#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		int g = 0;
		rep(i, 1, n) {
			rep(j, i + 1, n + 1)
				g += gcd(i, j);
		}
		printd(g);
	}
}
