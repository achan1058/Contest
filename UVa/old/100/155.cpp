#include <bits/stdc++.h>
#include "header.h"

int main() {
	int k, x, y;
	while (cin >> k >> x >> y && (k | x | y) != 0) {
		int ans = 0;
		x = abs(x - 1024);
		y = abs(y - 1024);

		while (k > 0) {
			if (x <= k && y <= k)
				ans++;
			x = abs(x - k);
			y = abs(y - k);
			k /= 2;
		}
		printf("%3d\n", ans);
	}
}
