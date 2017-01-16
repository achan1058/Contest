#include <bits/stdc++.h>
#include "double.h"
#include "graham.h"

int main() {
	int n;
	whileX(cin >> n && n > 0) {
		vector<point<Double>> points(n);
		read(points);
		vector<point<Double>> hull = graham(points, true);
		double dist = 0;
		printX("Region #%d:\n", X);

		printf("(%.1f,%.1f)", hull[0].x.v, hull[0].y.v);
		rrep(i, sz(hull) - 1, 0) {
			dist += hull[i].dist(hull[(i + 1) % sz(hull)]);
			printf("-(%.1f,%.1f)", hull[i].x.v, hull[i].y.v);
		}
		printf("\nPerimeter length = %.2f\n", dist);
	}
}
