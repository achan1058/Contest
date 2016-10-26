#include <bits/stdc++.h>
#include "bases.h"

int main() {
	vi cost(36);
	int m, v;
	forX() {
		printX("");
		printcn();
		read(cost);
		cin >> m;

		rep(i, 0, m) {
			int bestval = inf;
			vi best;
			cin >> v;
			rep(b, 2, 37) {
				int curcost = 0;
				vi digits = intToDigits(v, b);
				irep(d, digits)
					curcost += cost[d];

				if (curcost < bestval) {
					best.clear();
					bestval = curcost;
				}
				if (curcost == bestval)
					best.pb(b);
			}

			printf("Cheapest base(s) for number %d:", v);
			irep(b, best)
				printf(" %d", b);
			printf("\n");
		}
	}
}
