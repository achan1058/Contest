#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		vi corner(1 << n);
		int mx = 0;
		irep(v, corner)
			cin >> v;
		rep(c1, 0, 1 << n) {
			rep(i, 0, n) {
				int c2 = c1 ^ (1 << i), value = 0;
				rep(j, 0, n) {
					value += corner[c1 ^ (1 << j)];
					value += corner[c2 ^ (1 << j)];
				}

				mx = max(mx, value);
			}
		}
		printf("%d\n", mx);
	}
}
