#include <bits/stdc++.h>
#include "header.h"

vi table(14);
bool good(int k, int n) {
	vb arr(30);
	int cur = -1;
	rep(i, 0, k) {
		int n2 = (n - 1) % (2 * k - i) + 1;
		rep(j, 0, n2) {
			cur = (cur + 1) % (2 * k);
			while (arr[cur])
				cur = (cur + 1) % (2 * k);
		}
		if (cur < k)
			return false;
		arr[cur] = true;
	}
	return true;
}

int main() {
	int k;
	rep(i, 1, 14) {
		rep(n, 1, inf) {
			if (good(i, n)) {
				table[i] = n;
				break;
			}
		}
	}
	while (cin >> k && k != 0)
		printf("%d\n", table[k]);
}
