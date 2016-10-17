#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n;
	cin >> N;
	char c;
	rep(X, 1, N + 1) {
		bool sym = true;
		cin >> c >> c >> n;
		vvl mat = ml(n, n, 0);
		rep(i, 0, n) {
			rep(j, 0, n)
				cin >> mat[i][j];
		}
		rep(i, 0, n / 2 + 1) {
			rep(j, 0, n) {
				if (mat[i][j] < 0 || mat[i][j] != mat[n - i - 1][n - j - 1]) {
					sym = false;
					goto end;
				}
			}
		}
	end:;
		printf("Test #%d: %s.\n", X, sym ? "Symmetric" : "Non-symmetric");
	}
}
