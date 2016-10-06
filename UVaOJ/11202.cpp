#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, l, w;
	cin >> N;
	rep(X, 0, N) {
		cin >> l >> w;
		int l2 = (l + 1) / 2, w2 = (w + 1) / 2;
		printf("%d\n", l != w ? l2 * w2 : l2 * (l2 + 1) / 2);
	}
}
