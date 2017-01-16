#include <bits/stdc++.h>
#include "header.h"

int main() {
	vvl tiles = ml(2, 1200, 0);
	int m = 50;
	tiles[0][0] = 1;

	rep(i, 1, 1001) {
		tiles[0][i] = tiles[0][i - 1] + tiles[1][i - 1];
		rep(j, 0, i - m + 1)
			tiles[1][i] += tiles[0][j];
		if (tiles[0][i] + tiles[1][i] > 1000000) {
			printf("%d\n", i);
			return 0;
		}
	}
}
