#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	int m, n;
	while (cin >> m >> n && (m | n) != 0) {
		vvi arr = mi(m, n, 0);
		int mx = 0;
		drep(i, j, m, n) {
			cin >> arr[i][j];
			arr[i][j] = 1 - arr[i][j] + (arr[i][j] == 0 && i > 0 ? arr[i - 1][j] : 0);
		}
		rep(i, 0, m)
			mx = max(mx, get<0>(largestRectangle(arr[i])));

		printf("%d\n", mx);
	}
}
