#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k, m;
	while (cin >> n >> k >> m && (n | k | m) != 0) {
		int left = n - 1, right = 0, remain = n;
		vb removed(n);
		while (remain > 0) {
			rep(i, 0, k) {
				do {
					left = (left + 1) % n;
				} while (removed[left]);
			}
			rep(i, 0, m) {
				do {
					right = (right + n - 1) % n;
				} while (removed[right]);
			}
			if (left == right) {
				printf("%3d", left + 1);
				remain--;
			} else {
				printf("%3d%3d", left + 1, right + 1);
				remain -= 2;
			}
			printf(remain > 0 ? ',' : '\n');
			removed[left] = removed[right] = true;
		}
	}
}
