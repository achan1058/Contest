#include <bits/stdc++.h>
#include "point.h"
#include "header.h"

int main() {
	int n;
	ptd g, d, h;
	while (cin >> n >> g >> d) {
		bool good = false;
		rep(i, 0, n) {
			cin >> h;
			if (!good && h.dist(g) * 2 <= h.dist(d) + eps) {
				good = true;
				print("The gopher can escape through the hole at (%.3f,%.3f).", h.x, h.y);
			}
		}
		if (!good)
			print("The gopher cannot escape.");
	}
}
