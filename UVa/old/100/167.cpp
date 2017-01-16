#include <bits/stdc++.h>
#include "header.h"

vvi a = mi(8, 8, 0);
int main() {
	forX() {
		vi perm = { 0, 1, 2, 3, 4, 5, 6, 7 };
		int mx = 0;
		irep(ai, a)
			read(ai);

		do {
			int sum = 0;
			bool valid = true;
			drep(i, j, 8, i) {
				if (abs(perm[j] - perm[i]) == i - j) {
					valid = false;
					goto endloop;
				}
			}
		endloop:;
			if (valid) {
				rep(i, 0, 8)
					sum += a[i][perm[i]];
				mx = max(sum, mx);
			}
		} while (next_permutation(all(perm)));
		printf("%5d\n", mx);
	}
}
