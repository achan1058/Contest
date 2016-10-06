#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n, k, p;
	cin >> N;
	rep(X, 1, N + 1) {
		cin >> n >> k >> p;
		printf("Case %d: %d\n", X, (k + p + n - 1) % n + 1);
	}
}
