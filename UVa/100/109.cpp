#include <bits/stdc++.h>
#include "graham.h"
#include "polygon.h"

int main() {
	vector<Polygon<int>> kingdoms;
	int n;
	while (cin >> n && n != -1) {
		vector<pti> points(n);
		read(points);
		kingdoms.pb(Polygon<int>(graham(points)));
	}

	vb hit(sz(kingdoms));
	point<int> p;
	int total = 0;
	while (cin >> p) {
		rep(i, 0, sz(kingdoms)) {
			if (hit[i])
				continue;
			if (kingdoms[i].inPolygon(p) > 0) {
				total += abs(kingdoms[i].sa2());
				hit[i] = true;
				break;
			}
		}
	}

	printf("%.2f\n", total / 2.);
}
