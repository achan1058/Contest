#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi p;
	vvi queens;
	rep(i, 0, 8)
		p.pb(i);
	do {
		bool good = true;
		drep(i, j, 8, i) {
			if (i - j == abs(p[i] - p[j]))
				good = false;
		}
		if (good)
			queens.pb(p);
	} while (next_permutation(all(p)));

	forX() {
		vvi board = mi(8, 8, 0);
		read(board);
		int best = 0;
		irep(q, queens) {
			int cur = 0;
			rep(i, 0, 8)
				cur += board[i][q[i]];
			best = max(best, cur);
		}
		print("%5d", best);
	}
}
