#include <bits/stdc++.h>
#include "double.h"
#include "graham.h"

int main() {
	int n, X = 1;
	while (cin >> n && n > 0) {
		if (X > 1)
			printf("\n");

		vector<point<Double>> points(n);
		irep(p, points)
			cin >> p;
		vector<point<Double>> hull = graham(points, true);
		Double dist = 0;
		printf("Region #%d:\n", X);

		printf("(%.1f,%.1f)", hull[0].x, hull[0].y);
		rrep(i, sz(hull) - 1, 0) {
			dist += hull[i].dist(hull[(i + 1) % sz(hull)]);
			printf("-(%.1f,%.1f)", hull[i].x, hull[i].y);
		}
		printf("\nPerimeter length = %.2f\n", dist);
		X++;
	}
}
