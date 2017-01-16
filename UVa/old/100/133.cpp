#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, r, l;
	while (cin >> n >> r >> l && (n | r | l) != 0) {
		vb arr(n, true);
		bool first = true;
		int lp = n - 1, rp = 0, rem = n;

		while (rem > 0) {
			while (!arr[rp])
				rp = (rp + 1) % n;
			while (!arr[lp])
				lp = (lp + n - 1) % n;
			rep(i, 0, r - 1) {
				rp = (rp + 1) % n;
				while (!arr[rp])
					rp = (rp + 1) % n;
			}
			rep(i, 0, l - 1) {
				lp = (lp + n - 1) % n;
				while (!arr[lp])
					lp = (lp + n - 1) % n;
			}
			printf("%s", first ? "" : ",");
			if (rp == lp)
				printf("%3d", rp + 1);
			else
				printf("%3d%3d", rp + 1, lp + 1);
			arr[rp] = arr[lp] = false;
			first = false;
			rem -= (rp == lp ? 1 : 2);
		}
		printf("\n");
	}
}
