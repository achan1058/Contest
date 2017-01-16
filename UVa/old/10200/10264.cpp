#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		int mx = 0;
		vi corner(1 << n);
		read(corner);
		drep(c1, i, 1 << n, n) {
			int c2 = c1 ^ (1 << i), value = 0;
			rep(j, 0, n) {
				value += corner[c1 ^ (1 << j)];
				value += corner[c2 ^ (1 << j)];
			}

			mx = max(mx, value);
		}
		printf("%d\n", mx);
	}
}
