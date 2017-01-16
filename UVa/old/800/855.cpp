#include <bits/stdc++.h>
#include "header.h"

int main() {
	int x, y, s, a, f;
	forX() {
		vi vx, vy;
		cin >> s >> a >> f;
		for (int i = 0; i < f; i++) {
			cin >> x >> y;
			vx.push_back(x);
			vy.push_back(y);
		}
		sort(all(vx));
		sort(all(vy));
		printf("(Street: %d, Avenue: %d)\n", vx[(f - 1) / 2], vy[(f - 1) / 2]);
	}
}
