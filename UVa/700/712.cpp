#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k;
	whileX(cin >> n && n != 0) {
		vs vars(n);
		string ans, in;
		read(vars);
		cin >> ans >> k;
		print("S-Tree #%d:", X);
		rep(i, 0, k) {
			cin >> in;
			int pos = 0;
			rep(j, 0, n) {
				pos *= 2;
				pos += in[vars[j][1] - '1'] - '0';
			}
			printv(ans[pos]);
		}
		print("\n");
	}
}
