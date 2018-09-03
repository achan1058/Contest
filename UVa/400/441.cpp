#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		vb bad(n, true);
		vi nums(n);
		read(nums);
		rep(i, 0, 6)
			bad[i] = false;

		printX("");
		do {
			bool first = true;
			rep(i, 0, n) {
				if (!bad[i]) {
					printf("%s%d", first ? "" : " ", nums[i]);
					first = false;
				}
			}
			print("");
		} while (next_permutation(all(bad)));
	}
}
