#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n) {
		bool good = true;
		vi b(n);
		read(b);
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
			drep(i, j, n, i + 1)
				s.insert(b[i] + b[j]);
			if (sz(s) < n * (n + 1) / 2)
				good = false;
		}
		printp("It is %sa B2-Sequence.\n\n", good ? "" : "not ");
	}
}
