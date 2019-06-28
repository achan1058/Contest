#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, a, b;
	string s1, s2;
	cin >> n;
	vvi boxes(n);
	rep(i, 0, n)
		boxes[i] = { i };
	while (cin >> s1 && s1 != "quit") {
		cin >> a >> s2 >> b;
		pii ra, rb;
		drep(i, j, n, sz(boxes[i])) {
			if (boxes[i][j] == a)
				ra = { i, j };
			if (boxes[i][j] == b)
				rb = { i, j };
		}

		if (ra.first == rb.first)
			continue;
		if (s2 == "onto") {
			rep(k, rb.second + 1, sz(boxes[rb.first]))
				boxes[boxes[rb.first][k]].pb(boxes[rb.first][k]);
			boxes[rb.first].resize(rb.second + 1);
		}
		if (s1 == "move") {
			rep(k, ra.second + 1, sz(boxes[ra.first]))
				boxes[boxes[ra.first][k]].pb(boxes[ra.first][k]);
			boxes[ra.first].resize(ra.second + 1);
		}
		rep(k, ra.second, sz(boxes[ra.first]))
			boxes[rb.first].pb(boxes[ra.first][k]);
		boxes[ra.first].resize(ra.second);
	}

	rep(i, 0, n) {
		printf("%d:", i);
		irep(v, boxes[i])
			printf(" %d", v);
		print();
	}
}
