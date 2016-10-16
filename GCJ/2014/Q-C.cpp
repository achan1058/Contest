#include <bits/stdc++.h>
#include "header.h"

void prt(int r, int c, int pr, int pc, int v) {
	vs grid(r, string(c, '*'));
	rep(i, 0, pr)
		grid[i][0] = grid[i][1] = '.';
	rep(j, 0, pc)
		grid[0][j] = grid[1][j] = '.';

	grid[0][0] = 'c';

	rep(i, 2, pr) {
		rep(j, 2, pc) {
			if (v == 0)
				goto funcend;
			grid[i][j] = '.';
			v--;
		}
	}

funcend:;
	rep(i, 0, r)
		cout << grid[i] << endl;
}

int main() {
	int r, c, t;
	forX() {
		printp("\n");
		cin >> r >> c >> t;
		int g = r * c, v = g - t;
		bool good = false;

		if (r == 1 || c == 1) {
			cout << 'c';
			if (c == 1)
				cout << endl;
			rep(i, 1, v) {
				cout << '.';
				if (c == 1)
					cout << endl;
			}
			rep(i, v, g) {
				cout << '*';
				if (c == 1)
					cout << endl;
			}
			if (r == 1 && c != 1)
				cout << endl;

			good = true;
		} else if (v == 1) {
			prt(r, c, 0, 0, 0);
			good = true;
		} else {
			rep(i, 2, r + 1) {
				rep(j, 2, c + 1) {
					int mn = (i + j - 2) * 2;
					int mx = i * j;
					if (v >= mn && v <= mx) {
						prt(r, c, i, j, v - mn);
						good = true;
						goto end;
					}
				}
			}
		}


	end:;
		if (!good)
			cout << "Impossible" << endl;
	}
}