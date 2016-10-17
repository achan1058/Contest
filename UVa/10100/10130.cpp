#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n, w, p, g, mw;
	cin >> N;
	rep(X, 0, N) {
		cin >> n;
		vvi arr = mi(n + 1, 61, 0);
		rep(i, 0, n) {
			cin >> p >> w;
			rep(j, 0, 31) {
				arr[i + 1][j + w] = arr[i][j] + p;
				arr[i + 1][j] = max(arr[i][j], arr[i + 1][j]);
			}
		}

		cin >> g;
		int total = 0;
		rep(i, 0, g) {
			cin >> mw;
			total += arr[n][mw];
		}
		printf("%d\n", total);
	}
}
