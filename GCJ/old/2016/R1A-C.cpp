#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	forX() {
		cin >> n;
		vi F(n), maxchain(n);
		int longcycle = 0, chainlen = 0;
		read(F);

		rep(i, 0, n) {
			vi dist(n, inf);
			dist[i] = 1;
			int k = i;
			while (dist[F[k] - 1] == inf) {
				dist[F[k] - 1] = dist[k] + 1;
				k = F[k] - 1;
			}

			int cyclen = dist[k] + 1 - dist[F[k] - 1];
			longcycle = max(longcycle, cyclen);

			if (cyclen == 2)
				maxchain[F[k] - 1] = max(maxchain[F[k] - 1], dist[F[k] - 1]);
		}

		rep(i, 0, n)
			chainlen += maxchain[i];

		printp("%d\n", max(chainlen, longcycle));
	}
}
