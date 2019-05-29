#include <bits/stdc++.h>
#include "header.h"

bool isgood(const vi& perm) {
	drep(i, j, 8, i) {
		if (perm[i] == perm[j] || abs(perm[i] - perm[j]) == abs(i - j))
			return false;
	}
	return true;
}

int main() {
	vvi queens;
	vi perm(8);
	rep(i, 0, 8)
		perm[i] = i;
	do {
		if (isgood(perm))
			queens.pb(perm);
	} while (next_permutation(all(perm)));
	whileX(read(perm)) {
		int best = 8;
		irep(q, queens) {
			int cur = 0;
			rep(i, 0, 8) {
				if (perm[i] != q[i] + 1)
					cur++;
			}
			best = min(best, cur);
		}
		printc("%d", best);
	}
}
