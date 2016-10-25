#include <bits/stdc++.h>
#include "header.h"

int main() {
	int k;
	whileX(cin >> k && k > 0) {
		vi values(k), bit(k, 1);
		read(values);
		printX("");

		rep(i, 0, 6)
			bit[i] = 0;
		do {
			bool fs = true;
			rep(i, 0, k) {
				if (bit[i] == 0) {
					printf("%s%d", fs ? "" : " ", values[i]);
					fs = false;
				}
			}
			printf("\n");
		} while (next_permutation(all(bit)));
	}
}
