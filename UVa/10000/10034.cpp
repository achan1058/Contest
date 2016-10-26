#include <bits/stdc++.h>
#include "spanning_tree.h"
#include "point.h"

int main() {
	int n;
	forX() {
		cin >> n;
		vector<ptd> points(n);
		read(points);
		vvp<double> graph(n);
		drep(i, j, n, n)
			graph[i].pb({ j, points[i].dist(points[j]) });
		printX("%.2f\n", get<0>(prim(graph)));
	}
}
