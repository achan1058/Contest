#include <bits/stdc++.h>
#include "graham.h"

int main() {
	int n;
	forX() {
		printf("%d\n", X == 1 ? XT : -1);
		cin >> n;
		vector<pti> pts(n);
		irep(p, pts)
			cin >> p.y >> p.x;
		vector<pti> hull = graham(pts);
		printf("%d\n%d %d\n", sz(hull) + 1, hull[0].y, hull[0].x);
		rrep(i, sz(hull) - 1, 0)
			printf("%d %d\n", hull[i].y, hull[i].x);
		cin >> n;
	}
}
