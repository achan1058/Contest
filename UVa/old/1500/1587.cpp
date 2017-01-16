#include <bits/stdc++.h>
#include "header.h"

int main() {
	int u, v;
	while (cin >> u >> v) {
		if (u > v)
			swap(u, v);
		vector<pii> sides = { { u, v } };
		rep(i, 0, 5) {
			cin >> u >> v;
			if (u > v)
				swap(u, v);
			sides.pb({ u, v });
		}

		sort(all(sides));
		if (sides[0] != sides[1] ||
			sides[2] != sides[3] ||
			sides[4] != sides[5] ||
			sides[0].x != sides[2].x ||
			sides[0].y != sides[4].x ||
			sides[2].y != sides[4].y) {
			printf("IMPOSSIBLE\n");
			continue;
		} else {
			printf("POSSIBLE\n");
		}
	}
}
