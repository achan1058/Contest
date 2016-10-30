#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int m, n;
	forX() {
		cin >> m >> n;
		auto prime = tally(factor(m));
		int best = inf;

		irep(p, prime) {
			int t = n, ans = 0;
			while (t > 0) {
				t /= p.x;
				ans += t;
			}

			best = min(best, ans / p.y);
		}

		printcn();
		if (best == 0)
			printf("Impossible to divide\n");
		else
			printf("%d\n", best);
	}
}
