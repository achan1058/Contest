#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n, t;
	cin >> N;
	rep(X, 0, N) {
		cin >> n;
		rep(i, 0, n / 2)
			cin >> t;
		cin >> t;
		printf("Case %d: %d\n", X + 1, t);
		rep(i, 0, n / 2)
			cin >> t;
	}
}
