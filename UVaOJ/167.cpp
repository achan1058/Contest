#include <bits/stdc++.h>
#include "header.h"

vvi a = mi(8, 8, 0);
int main() {
	int N;
	cin >> N;
	rep(X, 0, N) {
		vi perm = { 0, 1, 2, 3, 4, 5, 6, 7 };
		int mx = 0;
		irep(ai, a) {
			irep(aij, ai)
				cin >> aij;
		}

		do {
			int sum = 0;
			bool valid = true;
			rep(i, 0, 8) {
				rep(j, 0, i) {
					if (abs(perm[j] - perm[i]) == i - j) {
						valid = false;
						goto endloop;
					}
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
