#include <bits/stdc++.h>
#include "header.h"

int main() {
	int X = 1, n;
	while (cin >> n) {
		bool good = true;
		vi b(n);
		fori(v, b)
			cin >> v;
		if (b[0] < 1) {
			good = false;
		} else {
			rep(i, 1, n) {
				if (b[i - 1] >= b[i]) {
					good = false;
					break;
				}
			}
		}
		if (good) {
			set<int> s;
			rep(i, 0, n) {
				rep(j, i, n)
					s.insert(b[i] + b[j]);
			}
			if (sz(s) < n * (n + 1) / 2)
				good = false;
		}
		printf("Case #%d: It is %sa B2-Sequence.\n\n", X, good ? "" : "not ");
		X++;
	}
}
