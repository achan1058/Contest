#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi a(11000);
	a[0] = 1;
	rep(i, 1, 10001) {
		a[i] = i * a[i - 1];
		while (a[i] % 10 == 0)
			a[i] /= 10;
		a[i] %= 100000;
	}

	int n;
	while (cin >> n)
		printf(" %4d -> %d\n", n, a[n] % 10);
}
