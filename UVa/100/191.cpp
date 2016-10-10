#include <bits/stdc++.h>
#include "segment.h"
#include "polygon.h"

int main() {
	int N, xs, ys, xe, ye, x1, x2, y1, y2;
	cin >> N;
	rep(X, 0, N) {
		cin >> x1 >> y1 >> x2 >> y2 >> xs >> ys >> xe >> ye;
		pti p1(x1, y1), p2(x2, y2);

		Polygon<int> poly(4);
		Segment<int> s(p1, p2);
		poly.v[0].x = poly.v[1].x = xs;
		poly.v[1].y = poly.v[2].y = ys;
		poly.v[2].x = poly.v[3].x = xe;
		poly.v[3].y = poly.v[0].y = ye;

		if (poly.inPolygon(p1) >= 0 || poly.inPolygon(p2) >= 0)
			printf("T\n");
		else if (s.intersect(Segment<int>(poly.v[0], poly.v[1])) >= 0)
			printf("T\n");
		else if (s.intersect(Segment<int>(poly.v[1], poly.v[2])) >= 0)
			printf("T\n");
		else if (s.intersect(Segment<int>(poly.v[2], poly.v[3])) >= 0)
			printf("T\n");
		else if (s.intersect(Segment<int>(poly.v[3], poly.v[0])) >= 0)
			printf("T\n");
		else
			printf("F\n");
	}
}
