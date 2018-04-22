#include <bits/stdc++.h>
#include "point.h"
#include "spanning_tree.h"
#include "header.h"

int main() {
	forX() {
		int n;
		cin >> n;
		vector<ptd> points(n);
		read(points);
		AdjList<double> graph(n);
		drep(i, j, n, i)
			graph.push(i, j, points[i].dist(points[j]), true);

		printX("%.2f\n", get<0>(prim(graph)));
	}
}
