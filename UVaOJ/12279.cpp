#include <bits/stdc++.h>
#include "header.h"

int main() {
	int X = 1, n, t;
	while (cin >> n && n != 0) {
		int count = 0;
		rep(i, 0, n) {
			cin >> t;
			count += (t == 0 ? -1 : 1);
		}
		printf("Case %d: %d\n", X, count);
		X++;
	}
}
