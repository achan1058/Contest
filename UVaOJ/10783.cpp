#include <bits/stdc++.h>
#include "header.h"

int main() {
	int T, a, b;
	cin >> T;
	rep(n, 1, T + 1) {
		cin >> a >> b;
		if (a % 2 == 0)
			a++;
		if (b % 2 == 0)
			b--;
		printf("Case %d: %d\n", n, (a + b) * (b - a + 2) / 4);
	}
}
