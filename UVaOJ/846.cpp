#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, l, r;
	cin >> N;
	vl mx;

	rep(i, 0, 100000) {
		if (i % 2 == 0)
			mx.pb(i * ll(i + 2) / 4);
		else
			mx.pb((i + 1) * ll(i + 1) / 4);
	}

	rep(X, 0, N) {
		cin >> l >> r;
		printf("%d\n", int(lower_bound(all(mx), r - l) - mx.begin()));
	}
}
