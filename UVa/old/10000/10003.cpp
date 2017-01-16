#include <bits/stdc++.h>
#include "header.h"

int main() {
	int l, e;
	while (cin >> l >> e && l != 0) {
		vi len(e + 2);
		vvi a = mi(e + 1, e + 1, 0);
		int m = 0, t = 0;
		read(len, 1, 1);
		len[e + 1] = l;

		rep(i, 1, e + 1) {
			rep(j, 0, e + 1 - i) {
				a[j][j + i] = inf;
				rep(k, j, j + i)
					a[j][j + i] = min(a[j][j + i], len[j + i + 1] - len[j] + a[j][k] + a[k + 1][j + i]);
			}
		}
		printf("The minimum cutting is %d.\n", a[0][e]);
	}
}
