#include <bits/stdc++.h>
#include "spanning_tree.h"
#include "point.h"

int main() {
	int N, n;
	cin >> N;
	rep(X, 0, N) {
		printf("%s", X > 0 ? "\n" : "");
		cin >> n;
		vector<ptd> points(n);
		AdjList<double> graph;
		fori(p, points)
			cin >> p;
		rep(i, 0, n) {
			rep(j, 0, n)
				graph.push(i, j, points[i].dist(points[j]));
		}
		printf("%.2f\n", get<0>(prim(graph)));
	}
}
