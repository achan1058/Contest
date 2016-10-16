#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	forX() {
		cin >> n;
		vi pancakes(n);
		read(pancakes);
		sort(all(pancakes));
		int best = pancakes.back();
		rep(i, 1, pancakes.back()) {
			int cuts = 0;
			irep(p, pancakes)
				cuts += (p - 1) / i;
			best = min(best, cuts + i);
		}

		printp("%d\n", best);
	}
}
