#include <bits/stdc++.h>
#include "header.h"

int main() {
	int r, c, v0, v1;
	string s;
	forX() {
		cin >> r >> c;
		vvl routes = ml(r, c, 0);
		vvi safe = mi(r, c, 1);
		routes[0][0] = 1;
		getline(cin, s);

		rep(i, 0, r) {
			getline(cin, s);
			stringstream ss(s);
			ss >> v0;
			while (ss >> v1)
				safe[v0 - 1][v1 - 1] = 0;
		}

		drep(i, j, r, c) {
			if (!safe[i][j])
				continue;
			if (i > 0)
				routes[i][j] += routes[i - 1][j];
			if (j > 0)
				routes[i][j] += routes[i][j - 1];
		}
		printX("%d\n", routes[r - 1][c - 1]);
	}
}
