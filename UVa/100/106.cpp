#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;

	while (cin >> N) {
		vb triple_free(N + 1, true);
		int rel_prime = 0, free = 0;

		for (int n = 1; n * n <= N / 2; n++) {
			for (int m = n + 1; m * m + n * n <= N; m++) {
				if ((m + n) % 2 == 0 || gcd(m, n) > 1)
					continue;
				int a = m * m - n * n;
				int b = 2 * m * n;
				int c = m * m + n * n;
				int ka = a, kb = b, kc = c;
				rel_prime++;

				while (kc <= N) {
					triple_free[ka] = false;
					triple_free[kb] = false;
					triple_free[kc] = false;
					ka += a;
					kb += b;
					kc += c;
				}
			}
		}

		rep(i, 1, N + 1) {
			if (triple_free[i])
				free++;
		}
		printf("%d %d\n", rel_prime, free);
	}
}
