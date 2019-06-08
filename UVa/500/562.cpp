#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, v, total = 0, mn = inf;
		cin >> n;
		vb poss(50001);
		poss[0] = true;
		rep(i, 0, n) {
			cin >> v;
			total += v;
			rrep(j, 50000, v)
				poss[j] = poss[j] || poss[j - v];
		}

		rep(i, 0, total / 2 + 1) {
			if (poss[i])
				mn = min(mn, total - 2 * i);
		}
		print(mn);
	}
}
