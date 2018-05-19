#include <bits/stdc++.h>
#include "dp_algs.h"
#include "header.h"

int main() {
	int n1, n2;
	whileX(cin >> n1 >> n2 && (n1 | n2) != 0) {
		vi t1(n1), t2(n2);
		read(t1);
		read(t2);
		print("Twin Towers #%d", X);
		print("Number of Tiles : %d\n", sz(lcs(t1, t2).x));
	}
}
