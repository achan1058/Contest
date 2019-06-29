#include <bits/stdc++.h>
#include "misc.h"
#include "header.h"

int main() {
	vi ans(151);
	rep(n, 3, 151) {
		for (int m = 1; ; m++) {
			if (joseph(n, m) == m % n) {
				ans[n] = m;
				break;
			}
		}
	}
	int n;
	whileX(cin >> n && n != 0)
		print(ans[n]);
}
