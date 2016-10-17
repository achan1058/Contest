#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n, k, t;
	cin >> N;
	rep(X, 0, N) {
		cin >> n >> k;
		vvi arr = mi(2, k, false);
		arr[0][0] = true;
		rep(i, 0, n) {
			arr[1 - i % 2] = vi(k);
			cin >> t;
			t %= k;
			if (t < 0)
				t += k;
			rep(j, 0, k) {
				arr[1 - i % 2][(j + t) % k] |= arr[i % 2][j];
				arr[1 - i % 2][(j + k - t) % k] |= arr[i % 2][j];
			}
		}
		printf("%sivisible\n", arr[n % 2][0] ? "D" : "Not d");
	}
}
