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
		edge_list<double> edges;
		drep(i, j, n, i)
			edges.pb({ i, j, points[i].dist(points[j]) });
		printX("%.2f\n", get<0>(kruskal(edges)));
	}
}
