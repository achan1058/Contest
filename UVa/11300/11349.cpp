#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	char c;
	forX() {
		bool sym = true;
		cin >> c >> c >> n;
		vvl mat = ml(n, n, 0);
		drep(i, j, n, n)
			cin >> mat[i][j];
		drep(i, j, n / 2 + 1, n) {
			if (mat[i][j] < 0 || mat[i][j] != mat[n - i - 1][n - j - 1]) {
				sym = false;
				goto end;
			}
		}
	end:;
		printf("Test #%d: %s.\n", X, sym ? "Symmetric" : "Non-symmetric");
	}
}
