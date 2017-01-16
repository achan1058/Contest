#include <bits/stdc++.h>
#include "point.h"

int main() {
	int n;
	while (cin >> n) {
		vector<ptd> points(n);
		read(points);

		if (n == 1) {
			printf("0.00\n");
			continue;
		}

		vd d(n - 1, inf);
		d[0] = points[0].dist(points[1]);
		rep(i, 2, n) {
			rep(j, 0, i - 1)
				d[i - 1] = min(d[i - 1], d[j] + points[j].dist(points[i]));
			rep(j, 0, i - 1)
				d[j] = d[j] + points[i - 1].dist(points[i]);
		}

		double ans = inf;
		rep(i, 0, n - 1)
			ans = min(ans, d[i] + points[i].dist(points[n - 1]));
		printf("%.2f\n", ans);
	}
}
