#include <bits/stdc++.h>
#include "floodfill.h"
#include "header.h"

int main() {
	int r, c;
	while (cin >> r >> c && (r | c) != 0) {
		vvi grid = mi(r, c, inf);
		int n, m, curr, curc;
		cin >> n;
		rep(i, 0, n) {
			cin >> curr >> m;
			rep(j, 0, m) {
				cin >> curc;
				grid[curr][curc] = -1;
			}
		}

		int sr, sc, er, ec;
		cin >> sr >> sc >> er >> ec;
		print("%d", flooddist(grid, sr, sc, er, ec));
	}
}
