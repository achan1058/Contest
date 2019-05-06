#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		vb cards(n);
		int cur = 0;
		printf("Discarded cards:");

		rep(i, 0, n - 1) {
			printf(" %d%s", cur + 1, i == n - 2 ? "" : ",");
			cards[cur] = true;
			rep(j, 0, 2) {
				do {
					cur = (cur + 1) % n;
				} while (cards[cur]);
			}
		}
		print("\nRemaining card: %d", cur + 1);
	}
}
