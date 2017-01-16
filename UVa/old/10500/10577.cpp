#include <bits/stdc++.h>
#include "circle.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		vector<ptd> points(3);
		read(points);
		Circle<double> circ(points[0], points[1], points[2]);
		ptd center = circ.c;
		double mx = points[0].x, Mx = points[0].x, my = points[0].y, My = points[0].y;
		double dist = circ.radius(), angle = center.angle(points[0]), shift = 2 * M_PI / n;

		rep(i, 1, n) {
			angle += shift;
			ptd vtx = center + ptd::anglePoint(dist, angle);
			mx = min(mx, vtx.x);
			Mx = max(Mx, vtx.x);
			my = min(my, vtx.y);
			My = max(My, vtx.y);
		}

		printf("Polygon %d: %.3f\n", X, (Mx - mx) * (My - my));
	}
}
