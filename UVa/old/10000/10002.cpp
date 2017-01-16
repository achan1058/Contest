#include <bits/stdc++.h>
#include "polygon.h"
#include "graham.h"

int main() {
	int n;
	while (cin >> n && n >= 3) {
		vector<ptd> points(n);
		read(points);
		ptd center = Polygon<double>(graham(points)).centroid();
		printf("%.3f %.3f\n", center.x, center.y);
	}
}
