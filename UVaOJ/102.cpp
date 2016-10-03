#include <bits/stdc++.h>
#include "header.h"

vvi a = mi(3, 3, 0);
string c = "BCG";
int main() {
	while (true) {
		int total = 0, num_stat = 0;
		rep(i, 0, 3) {
			rep(j, 0, 3) {
				if (!(cin >> a[i][j]))
					return 0;
				total += a[i][j];
			}
			swap(a[i][1], a[i][2]);
		}

		vi v = { 0, 1, 2 }, best_v;
		do {
			if (a[0][v[0]] + a[1][v[1]] + a[2][v[2]] > num_stat) {
				num_stat = a[0][v[0]] + a[1][v[1]] + a[2][v[2]];
				best_v = v;
			}
		} while (next_permutation(all(v)));
		printf("%c%c%c %d\n", c[best_v[0]], c[best_v[1]], c[best_v[2]], total - num_stat);
	}
}
