#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		vb rel(n + 1, true);
		int ans1 = 0, ans2 = 0;
		for (int a = 1; 2 * a * a <= n; a++) {
			for (int b = a + 1; a * a + b * b <= n; b += 2) {
				if (gcd(a, b) != 1)
					continue;
				int x = b * b - a * a;
				int y = 2 * a * b;
				int z = b * b + a * a;
				ans1++;

				for (int k = 1; k * z <= n; k++)
					rel[k * x] = rel[k * y] = rel[k * z] = false;
			}
		}
		rep(i, 1, n + 1) {
			if (rel[i])
				ans2++;
		}
		print(ans1, ans2);
	}
}
