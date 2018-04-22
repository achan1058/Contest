#include <bits/stdc++.h>
#include "graham.h"
#include "polygon.h"
#include "header.h"

int main() {
	int n, x, y;
	vector<Polygon<int>> kingdoms;
	while (cin >> n && n != -1) {
		vector<pti> king;
		rep(i, 0, n) {
			cin >> x >> y;
			king.pb({ x, y });
		}
		kingdoms.pb(Polygon<int>(graham(king)));
	}
	int ans = 0;
	vb hit(sz(kingdoms));
	while (cin >> x >> y) {
		rep(i, 0, sz(kingdoms)) {
			if (!hit[i] && kingdoms[i].inPolygon({ x, y }) >= 0) {
				hit[i] = true;
				ans += kingdoms[i].sa2();
			}
		}
	}
	printf("%.2f\n", ans / 2.);
}
