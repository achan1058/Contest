#include <bits/stdc++.h>
#include "header.h"

int main() {
	string p, e;
	while (cin >> p >> e && (p != "0" || e != "0")) {
		if (e == "0") {
			printf("1\n");
		} else {
			if (sz(e) > 2)
				e = e.substr(sz(e) - 2);
			int n = (stoi(e) + 3) % 4 + 1, b = p.back() - '0', r = 1;
			rep(i, 0, n)
				r *= b;

			printf("%d\n", r % 10);
		}
	}
}
