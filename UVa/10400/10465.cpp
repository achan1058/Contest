#include <bits/stdc++.h>
#include "header.h"

int main() {
	int m, n, t;
	while (cin >> m >> n >> t) {
		int bestn = inf, bestb = inf;
		rep(i, 0, t + 1) {
			if (i * m > t)
				break;
			int rem = t - i * m;
			int burger = rem / n + i, beer = rem % n;
			if (beer < bestb || (beer == bestb && burger > bestn)) {
				bestb = beer;
				bestn = burger;
			}
		}
		if (bestb == 0)
			print(bestn);
		else
			print(bestn, bestb);
	}
}
