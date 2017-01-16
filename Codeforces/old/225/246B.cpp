#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, t, total = 0;
	cin >> n;
	rep(i, 0, n) {
		cin >> t;
		total += t;
	}
	printf("%d\n", n - (total % n == 0 ? 0 : 1));
}
