#include <bits/stdc++.h>
#include "dp_algs.h"
#include "header.h"

int main() {
	vi heights;
	int n;
	whileX(cin >> n && n != -1) {
		heights.clear();
		heights.pb(-n);
		while (cin >> n && n != -1)
			heights.pb(-n);
		printX("Test #%d:\n", X);
		print("  maximum possible interceptions: %d", sz(lis(heights).first));
	}
}
