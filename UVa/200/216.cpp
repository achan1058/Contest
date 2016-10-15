#include <bits/stdc++.h>
#include "point.h"

int main() {
	int n, X = 1;
	while (cin >> n && n != 0) {
		vector<ptd> points(n), best;
		fori(p, points)
			cin >> p;

		sort(all(points));
		double best_dist = inf;

		do {
			double dist = 0;
			rep(i, 1, n)
				dist += points[i].dist(points[i - 1]);
			if (dist < best_dist) {
				best_dist = dist;
				best = points;
			}
		} while (next_permutation(all(points)));

		printf("**********************************************************\n");
		printf("Network #%d\n", X);

		rep(i, 1, n)
			printf("Cable requirement to connect (%.0f,%.0f) to (%.0f,%.0f) is %.2f feet.\n", best[i - 1].x, best[i - 1].y, best[i].x, best[i].y, best[i].dist(best[i - 1]) + 16);
		printf("Number of feet of cable required is %.2f.\n", best_dist + 16 * (n - 1));
		X++;
	}
}
