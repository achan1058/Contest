#include <bits/stdc++.h>
#include "misc.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		for (int k = 2;; k++) {
			if (joseph(n, k) == k % n) {
				printf("%d\n", k);
				break;
			}
		}
	}
}
