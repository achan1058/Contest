#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi count(1001);
	int best = 0;
	rep(m, 1, 40) {
		rep(n, 1, m) {
			if ((m - n) % 2 == 0 || gcd(m, n) != 1)
				continue;

			int a = m * m - n * n, b = 2 * m * n, c = m * m + n * n, v = a + b + c;
			for (int i = v; i <= 1000; i += v)
				count[i]++;
		}
	}

	rep(i, 0, 1001) {
		if (count[i] > count[best])
			best = i;
	}

	printf("%d\n", best);
}
