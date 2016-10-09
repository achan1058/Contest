#include <bits/stdc++.h>
#include "point.h"
#include "shortest_path.h"

int main() {
	int n, X = 1;
	while (cin >> n && n != 0) {
		vector<ptd> vec(n);
		vvd dist = md(n, n, 0);

		irep(p, vec)
			cin >> p;
		rep(i, 0, n) {
			rep(j, 0, n)
				dist[i][j] = vec[i].dist(vec[j]);
		}

		double ans = floydWarshall(dist, double(inf), true).x[0][1];
		printf("Scenario #%d\n", X);
		printf("Frog Distance = %.3f\n\n", ans);
		X++;
	}
}
