#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m, c;
	whileX(cin >> n >> m >> c && (n | m | c) != 0) {
		int maxv = 0, curv = 0, ci;
		vi dev(n);
		vb on(n);
		read(dev);
		rep(i, 0, m) {
			cin >> ci;
			ci--;

			if (on[ci]) {
				curv -= dev[ci];
				on[ci] = false;
			} else {
				curv += dev[ci];
				maxv = max(maxv, curv);
				on[ci] = true;
			}
		}
		printf("Sequence %d\n", X);
		if (maxv > c)
			printf("Fuse was blown.\n\n");
		else
			printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n\n", maxv);
	}
}
