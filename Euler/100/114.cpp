#include <bits/stdc++.h>
#include "header.h"

int main() {
	vvl tiles = ml(2, 60, 0);
	int m = 3;
	tiles[0][0] = 1;

	rep(i, 1, 51) {
		tiles[0][i] = tiles[0][i - 1] + tiles[1][i - 1];
		rep(j, 0, i - m + 1)
			tiles[1][i] += tiles[0][j];
	}

	printf("%lld\n", tiles[0][50] + tiles[1][50]);
}
