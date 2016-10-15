#include <bits/stdc++.h>
#include "sweep_line.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		vector<ptd> points(n);
		fori(p, points)
			cin >> p;
		double max_dist2 = get<0>(closestPair(points));
		if (max_dist2 >= 10000 * 10000 - eps)
			printf("INFINITY\n");
		else
			printf("%.4f\n", sqrt(max_dist2));
	}
}
