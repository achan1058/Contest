#include <bits/stdc++.h>
#include "header.h"

int main() {
	int L = 1500000;
	unordered_map<int, int> triples;
	rep(n, 2, 2000) {
		rep(m, 1, n) {
			if ((m + n) % 2 == 0 || gcd(m, n) > 1)
				continue;

			int total = 2 * n * (m + n);
			if (total > L)
				break;
			for (int i = total; i <= L; i += total)
				triples[i]++;
		}
	}
	int ans = 0;
	irep(t, triples) {
		if (t.y == 1)
			ans++;
	}
	printf("%d\n", ans);
}
