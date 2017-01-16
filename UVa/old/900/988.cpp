#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		int result = 0;
		vi v(n, 0);
		v[0] = 1;
		rep(i, 0, n) {
			int e, t;
			cin >> e;

			if (e == 0)
				result += v[i];
			rep(j, 0, e) {
				cin >> t;
				v[t] += v[i];
			}
		}
		printX("%d\n", result);
	}
}
