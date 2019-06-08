#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, b, h, w;
	while (cin >> n >> b >> h >> w) {
		int best = inf;
		int p, a;
		rep(i, 0, h) {
			cin >> p;
			rep(j, 0, w) {
				cin >> a;
				if (a >= n)
					best = min(best, p * n);
			}
		}
		if (best <= b)
			print(best);
		else
			print("stay home");
	}
}
