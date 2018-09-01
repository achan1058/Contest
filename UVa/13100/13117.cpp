#include <bits/stdc++.h>
#include "segment.h"
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		double ans = inf;
		ptd center;
		vector<ptd> points(n);
		cin >> center;
		read(points);
		rep(i, 0, n) {
			Segment<double> s(points[i], points[(i + 1) % n]);
			ptd close = s.closest(center);
			ans = min(ans, center.dist(close));
		}
		print("%.3f", ans);
	}
}
