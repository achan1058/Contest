#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k;
	forX() {
		cin >> n;
		vb found(3000, false);
		rep(i, 0, 2 * n * n - n) {
			cin >> k;
			found[k] = !found[k];
		}

		printf("Case #%d:", X);
		rep(i, 0, 3000) {
			if (found[i])
				printf(" %d", i);
		}
		printf("\n");
	}
}
