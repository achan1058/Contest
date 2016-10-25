#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	forX() {
		int m = inf;
		cin >> n;
		for (int i1 = 1; i1 * i1 * i1 <= n; i1++) {
			if (n % i1 != 0)
				continue;
			for (int i2 = i1; i1 * i2 * i2 <= n; i2++) {
				if ((n / i1) % i2 != 0)
					continue;

				int i3 = n / i1 / i2;
				m = min(m, 2 * (i1 * i2 + i1 * i3 + i2 * i3));
			}
		}
		printf("%d\n", m);
	}
}
