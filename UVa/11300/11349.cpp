#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		char c;
		int n;
		cin >> c >> c >> n;
		vvl mat = ml(n, n, 0);
		read(mat);

		bool good = true;
		drep(i, j, n, i + 1) {
			if (mat[i][j] < 0 || mat[i][j] != mat[n - i - 1][n - j - 1]) {
				good = false;
				goto end;
			}
		}
	end:;
		print("Test #%d: %s.", X, good ? "Symmetric" : "Non-symmetric");
	}
}
