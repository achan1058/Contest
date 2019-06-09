#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	vs grid;
	while (getline(cin, s)) {
		if (!grid.empty() && sz(s) < sz(grid.back()))
			s.resize(sz(grid.back()), ' ');
		grid.pb(s);
	}
	rep(j, 0, sz(grid.back())) {
		rrep(i, sz(grid) - 1, 0) {
			if (j >= sz(grid[i]))
				break;
			printf(grid[i][j]);
		}
		print();
	}
}
