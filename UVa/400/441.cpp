#include <bits/stdc++.h>
#include "header.h"

int main() {
	int k, X = 1;
	while (cin >> k && k > 0) {
		vi values(k);
		vi bit(k, 1);
		printf("%s", X > 1 ? "\n" : "");
		rep(i, 0, 6)
			bit[i] = 0;
		rep(i, 0, k)
			cin >> values[i];
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
		X++;
	}
}
