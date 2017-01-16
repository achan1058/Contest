#include <bits/stdc++.h>
#include "header.h"

int main() {
	fstream in("Euler/input/345.txt");
	vvi grid = mi(15, 15, 0);
	vi maxvalue(1 << 15);
	irep(g, grid) {
		irep(v, g)
			in >> v;
	}

	rep(i, 0, (1 << 15) - 1) {
		int num1 = bits(i);
		rep(j, 0, 15) {
			if ((i & (1 << j)) != 0)
				continue;
			maxvalue[i + (1 << j)] = max(maxvalue[i + (1 << j)], maxvalue[i] + grid[num1][j]);
		}
	}

	printf("%d\n", maxvalue[(1 << 15) - 1]);
}
