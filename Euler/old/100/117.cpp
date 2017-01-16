#include <bits/stdc++.h>
#include "header.h"

int main() {
	vl tiles(51);
	tiles[0] = tiles[1] = 1;
	tiles[2] = 2;
	tiles[3] = 4;
	rep(i, 4, 51)
		tiles[i] = tiles[i - 1] + tiles[i - 2] + tiles[i - 3] + tiles[i - 4];

	printf("%lld\n", tiles[50]);
}
