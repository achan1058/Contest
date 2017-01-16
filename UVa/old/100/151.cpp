#include <bits/stdc++.h>
#include "misc.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		for (int k = 1;; k++) {
			if (joseph(n, k) == (k + 11) % n) {
				printf("%d\n", k);
				break;
			}
		}
	}
}
