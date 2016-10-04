#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, X = 1;
	while (cin >> n && n != 0) {
		printf("%s", X > 1 ? "\n" : "");
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
		printf("%d\n", result);
		X++;
	}
}
