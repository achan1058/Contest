#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		vi r, c;
		vvi arr = mi(n, n, 0);
		read(arr);
		rep(i, 0, n) {
			int sum = 0;
			rep(j, 0, n)
				sum += arr[i][j];
			if (sum % 2 == 1)
				r.pb(i);
		}

		rep(j, 0, n) {
			int sum = 0;
			rep(i, 0, n)
				sum += arr[i][j];
			if (sum % 2 == 1)
				c.pb(j);
		}

		if (r.empty() && c.empty())
			printf("OK\n");
		else if (sz(r) == 1 && sz(c) == 1)
			printf("Change bit (%d,%d)\n", r[0] + 1, c[0] + 1);
		else
			printf("Corrupt\n");
	}
}
