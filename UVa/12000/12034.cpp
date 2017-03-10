#include <bits/stdc++.h>
#include "header.h"

int main() {
	vvi ways = mi(1001, 1001, 0);
	ways[0][0] = 1;
	mod = 10056;
	drep(i, j, 1000, i + 1) {
		ways[i + 1][j + 1] = add(ways[i + 1][j + 1], mul(ways[i][j], j + 1));
		ways[i + 1][j] = add(ways[i + 1][j], mul(ways[i][j], j));
	}
	drep(i, j, 1001, i)
		ways[i][0] = add(ways[i][0], ways[i][j + 1]);
	forX() {
		int n;
		cin >> n;
		printc("%d\n", ways[n][0]);

	}
}
