#include <bits/stdc++.h>
#include "circle.h"

pair<double, bool> calc(ptd a, ptd b, ptd c) {
	double rad = a.dist(b) / 2;
	Circle<double> circ((a + b) / 2, rad);
	return{ rad, circ.inCircle(c) == -1 };
}

int main() {
	int n;
	while (cin >> n && n != 0) {
		vector<ptd> points(n);
		read(points);
		double radius = 0, circsize;
		cin >> circsize;

		drep(i, j, n, i) {
			rep(k, 0, j) {
				bool triangle = true;
				auto ans = calc(points[i], points[j], points[k]);
				radius = max(radius, ans.x);
				triangle &= ans.y;
				ans = calc(points[i], points[k], points[j]);
				radius = max(radius, ans.x);
				triangle &= ans.y;
				ans = calc(points[j], points[k], points[i]);
				radius = max(radius, ans.x);
				triangle &= ans.y;

				if (triangle)
					radius = max(radius, Circle<double>(points[i], points[j], points[k]).radius());
			}
		}

		if (radius <= circsize + eps)
			printf("The polygon can be packed in the circle.\n");
		else
			printf("There is no way of packing that polygon.\n");
	}
}
