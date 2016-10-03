#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, mx = 0;
	cin >> n;
	vvi arr = mi(n, n + 1, 0);
	rep(i, 0, n) {
		arr[i][0] = 0;
		rep(j, 0, n) {
			cin >> arr[i][j + 1];
			arr[i][j + 1] += arr[i][j];
		}
	}

	rep(j1, 0, n) {
		rep(j2, j1, n) {
			int sum = 0;
			rep(i, 0, n) {
				sum += arr[i][j2 + 1] - arr[i][j1];
				mx = max(mx, sum);

				if (sum < 0)
					sum = 0;
			}
		}
	}
	printf("%d\n", mx);
}
