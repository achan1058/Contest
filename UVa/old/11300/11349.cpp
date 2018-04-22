#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n;
		char c;
		cin >> c >> c >> n;
		vvl mat = ml(n, n, 0);
		read(mat);
		bool good = true;
		drep(i, j, n, n) {
			if (mat[i][j] < 0 || mat[i][j] != mat[n - i - 1][n - j - 1]) {
				good = false;
				break;
			}
		}
		printf("Test #%d: %s.\n", X, good ? "Symmetric" : "Non-symmetric");
	}
}
