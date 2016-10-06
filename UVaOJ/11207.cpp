#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, l, r;
	while (cin >> n && n > 0) {
		int largest = 0, index = 0;
		rep(i, 1, n + 1) {
			cin >> l >> r;
			int cur = max(max(min(l, 4 * r), min(r, 4 * l)), min(2 * l, 2 * r));
			if (cur > largest) {
				index = i;
				largest = cur;
			}
		}
		printf("%d\n", index);
	}
}
