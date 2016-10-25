#include <bits/stdc++.h>
#include "header.h"

int main() {
	vvi triangle(9);
	rep(i, 0, 9)
		triangle[i].resize(i + 1);
	forX() {
		drep(i, j, 5, i + 1)
			cin >> triangle[2 * i][2 * j];
		rep(j, 0, 4)
			triangle[8][2 * j + 1] = (triangle[6][2 * j] - triangle[8][2 * j] - triangle[8][2 * j + 2]) / 2;
		rrep(i, 7, 0) {
			rep(j, 0, i + 1)
				triangle[i][j] = triangle[i + 1][j] + triangle[i + 1][j + 1];
		}
		rep(i, 0, 9) {
			rep(j, 0, i + 1)
				printf("%s%d", j > 0 ? " " : "", triangle[i][j]);
			printf("\n");
		}
	}
}
