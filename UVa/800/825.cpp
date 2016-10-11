#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, r, c, v0, v1;
	string s;
	cin >> N;
	rep(X, 0, N) {
		printf("%s", X > 0 ? "\n" : "");
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

		rep(i, 0, r) {
			rep(j, 0, c) {
				if (!safe[i][j])
					continue;
				if (i > 0)
					routes[i][j] += routes[i - 1][j];
				if (j > 0)
					routes[i][j] += routes[i][j - 1];
			}
		}
		printf("%d\n", routes[r - 1][c - 1]);
	}
}
