#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n, f;
	cin >> N;
	rep(X, 1, N + 1) {
		int fast = 0;
		cin >> n;
		rep(i, 0, n) {
			cin >> f;
			fast = max(f, fast);
		}
		printf("Case %d: %d\n", X, fast);
	}
}
