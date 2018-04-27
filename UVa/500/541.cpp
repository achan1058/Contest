#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		vvi mat = mi(n, n, 0);
		int r = 0, c = 0;
		read(mat);
		rep(i, 0, n) {
			int count = 0;
			rep(j, 0, n)
				count += mat[i][j];
			if (count % 2)
				r = (r == 0 ? i + 1 : -1);
		}

		rep(j, 0, n) {
			int count = 0;
			rep(i, 0, n)
				count += mat[i][j];
			if (count % 2)
				c = (c == 0 ? j + 1 : -1);
		}

		if (r == 0 && c == 0)
			printf("OK\n");
		else if (r == -1 || c == -1)
			printf("Corrupt\n");
		else
			printf("Change bit (%d,%d)\n", r, c);
	}
}
