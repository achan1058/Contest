#include <bits/stdc++.h>
#include "header.h"

int main() {
	int T, n;
	cin >> T;
	rep(X, 0, T) {
		cin >> n;
		vi pancakes(n);
		rep(i, 0, n)
			cin >> pancakes[i];
		sort(all(pancakes));
		int best = pancakes.back();
		rep(i, 1, pancakes.back()) {
			int cuts = 0;
			fori(p, pancakes)
				cuts += (p - 1) / i;
			best = min(best, cuts + i);
		}

		printf("Case #%d: %d\n", X + 1, best);
	}
}
