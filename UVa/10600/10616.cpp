#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, q;
	whileX(cin >> n >> q && (n | q) != 0) {
		vi nums(n);
		read(nums);
		print("SET %d:", X);
		rep(k, 1, q + 1) {
			int d, m;
			cin >> d >> m;
			vvl choice = ml(m + 1, d, 0);
			choice[0][0] = 1;
			irep(v, nums) {
				int vd = (v % d + d) % d;
				rrep(i, m - 1, 0) {
					rep(j, 0, d)
						choice[i + 1][(j + vd) % d] += choice[i][j];
				}
			}
			print("QUERY %d: %lld", k, choice[m][0]);
		}
	}
}
