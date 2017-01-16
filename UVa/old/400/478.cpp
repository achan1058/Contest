#include <bits/stdc++.h>
#include "double.h"
#include "polygon.h"
#include "circle.h"

int main() {
	vector<Polygon<Double>> poly;
	vector<Circle<Double>> circ;
	vb is_circle;
	char c;

	while (cin >> c && c != '*') {
		poly.resize(sz(is_circle) + 1);
		circ.resize(sz(is_circle) + 1);
		is_circle.resize(sz(is_circle) + 1);

		if (c == 'c') {
			is_circle.back() = true;
			Double x, y, r;
			cin >> x >> y >> r;
			circ.back() = Circle<Double>(x, y, r);
		} else if (c == 'r') {
			Double x1, y1, x2, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			poly.back() = Polygon<Double>(4);
			poly.back().v[0].x = poly.back().v[1].x = x1;
			poly.back().v[1].y = poly.back().v[2].y = y1;
			poly.back().v[2].x = poly.back().v[3].x = x2;
			poly.back().v[3].y = poly.back().v[0].y = y2;
		} else if (c == 't') {
			poly.back() = Polygon<Double>(3);
			cin >> poly.back().v[0] >> poly.back().v[1] >> poly.back().v[2];
		}
	}

	Double x, y;
	whileX(cin >> x >> y && (x != Double(9999.9) || y != Double(9999.9))) {
		point<Double> p(x, y);
		bool in_figure = false;
		rep(i, 0, sz(is_circle)) {
			bool found = false;
			if (is_circle[i] && circ[i].inCircle(p) == 1)
				found = true;
			else if (!is_circle[i] && poly[i].inPolygon(p) == 1)
				found = true;
			if (found) {
				printf("Point %d is contained in figure %d\n", X, i + 1);
				in_figure = true;
			}
		}

		if (!in_figure)
			printf("Point %d is not contained in any figure\n", X);
	}
}
