#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	int X = 1, m, n;
	while (cin >> m >> n && (m | n) != 0) {
		vi t1(m), t2(n);
		irep(v, t1)
			cin >> v;
		irep(v, t2)
			cin >> v;
		printf("Twin Towers #%d\n", X);
		printf("Number of Tiles : %d\n\n", sz(lcs(t1, t2)));
		X++;
	}
}
