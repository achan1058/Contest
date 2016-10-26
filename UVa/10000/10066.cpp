#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	int m, n;
	whileX(cin >> m >> n && (m | n) != 0) {
		vi t1(m), t2(n);
		read(t1);
		read(t2);
		printf("Twin Towers #%d\n", X);
		printf("Number of Tiles : %d\n\n", sz(lcs(t1, t2)));
	}
}
