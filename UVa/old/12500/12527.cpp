#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	while (cin >> n >> m) {
		int ans = 0;
		for (int i = n; i <= m; i++) {
			int d = i;
			vb used(10, false);
			while (d > 0) {
				if (used[d % 10])
					break;
				used[d % 10] = true;
				d /= 10;
			}
			if (d == 0)
				ans++;
		}
		printf("%d\n", ans);
	}
}
