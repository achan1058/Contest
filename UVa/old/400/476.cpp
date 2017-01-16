#include <bits/stdc++.h>
#include "double.h"
#include "polygon.h"

int main() {
	vector<Polygon<Double>> poly;
	char c;
	while (cin >> c && c != '*') {
		poly.resize(sz(poly) + 1);
		Double x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		poly.back() = Polygon<Double>(4);
		poly.back().v[0].x = poly.back().v[1].x = x1;
		poly.back().v[1].y = poly.back().v[2].y = y1;
		poly.back().v[2].x = poly.back().v[3].x = x2;
		poly.back().v[3].y = poly.back().v[0].y = y2;
	}

	Double x, y;
	whileX(cin >> x >> y && (x != Double(9999.9) || y != Double(9999.9))) {
		point<Double> p(x, y);
		bool in_figure = false;
		rep(i, 0, sz(poly)) {
			if (poly[i].inPolygon(p) == 1) {
				printf("Point %d is contained in figure %d\n", X, i + 1);
				in_figure = true;
			}
		}

		if (!in_figure)
			printf("Point %d is not contained in any figure\n", X);
	}
}
