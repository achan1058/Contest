#include <bits/stdc++.h>
#include "floodfill.h"
#include "header.h"

int main() {
	int r, c;
	while (cin >> r >> c && (r | c) != 0) {
		vvi grid = mi(r, c, 1);
		int n, m, curr, curc;
		cin >> n;
		rep(i, 0, n) {
			cin >> curr >> m;
			rep(j, 0, m) {
				cin >> curc;
				grid[curr][curc] = inf;
			}
		}

		int sr, sc, er, ec;
		cin >> sr >> sc >> er >> ec;
		printv(flooddist(grid, sr, sc, er, ec) - 1);
	}
}
