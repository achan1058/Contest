#include <bits/stdc++.h>
#include "polygon.h"

int main() {
	fstream in("Euler/input/102.txt");
	int ans = 0;
	char c;

	rep(i, 0, 1000) {
		vector<pti> points(3, pti());
		in >> points[0].x >> c >> points[0].y >> c
			>> points[1].x >> c >> points[1].y >> c
			>> points[2].x >> c >> points[2].y;

		if (Polygon<int>(points).inPolygon(pti()) == 1)
			ans++;
	}
	printf("%d\n", ans);
}
