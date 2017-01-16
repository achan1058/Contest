#include <bits/stdc++.h>
#include "point.h"

int main() {
	int n;
	forX() {
		cin >> n;
		vector<ptd> points(n);
		read(points);
		sort(all(points));
		double cur_height = 0, total = 0;
		rrep(i, n - 2, 0) {
			if (points[i].y > cur_height) {
				double dy = points[i].y - cur_height, d = points[i].dist(points[i + 1]);
				total += d / (points[i].y - points[i + 1].y) * dy;
				cur_height = points[i].y;
			}
		}

		printf("%.2f\n", total);
	}
}
