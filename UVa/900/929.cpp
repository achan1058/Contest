#include <bits/stdc++.h>
#include "floodfill.h"
#include "header.h"

int main() {
	int r, c;
	forX() {
		cin >> r >> c;
		vvi grid = mi(r, c, 0), dist = mi(r, c, inf);
		read(grid);
		printv(flooddist(grid, 0, 0, r - 1, c - 1));
	}
}
