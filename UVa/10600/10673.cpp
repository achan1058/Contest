#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, x, k;
	cin >> N;
	rep(X, 0, N) {
		cin >> x >> k;
		int q = x % k, p = k - q;
		printf("%d %d\n", p, q);
	}
}
