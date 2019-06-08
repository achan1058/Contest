#include <bits/stdc++.h>
#include "header.h"

int best(const vi& row) {
	int n = sz(row);
	if (n == 1)
		return row[0];
	if (n == 2)
		return max(row[0], row[1]);
	if (n == 3)
		return max(row[0] + row[2], row[1]);

	vi tally(n);
	tally[0] = row[0];
	tally[1] = row[1];
	tally[2] = row[0] + row[2];

	rep(i, 3, n)
		tally[i] = row[i] + max(tally[i - 2], tally[i - 3]);
	return max(tally[n - 1], tally[n - 2]);
}

int main() {
	int r, c;
	while (cin >> r >> c && (r | c) != 0) {
		vvi grid = mi(r, c, 0);
		vi sum(r);
		read(grid);
		rep(i, 0, r)
			sum[i] = best(grid[i]);
		printd(best(sum));
	}
}
