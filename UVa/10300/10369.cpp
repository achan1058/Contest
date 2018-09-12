#include <bits/stdc++.h>
#include "graph_util.h"
#include "point.h"
#include "union_find.h"
#include "header.h"

double kruskal(edge_list<double>& edges, int n, int comps) {
	UnionFind un(n);
	sort(edges.begin(), edges.end(), [](const tuple<int, int, double>& v1, const tuple<int, int, double>& v2) { return get<2>(v1) < get<2>(v2); });
	for (const auto& e : edges) {
		if (un.join(get<0>(e), get<1>(e))) {
			n--;
			if (n == comps)
				return get<2>(e);
		}
	}
	return inf;
}

int main() {
	forX() {
		int n, s;
		cin >> s >> n;
		vector<pti> coords(n);
		read(coords);
		edge_list<double> edges;
		drep(i, j, n, i) {
			edges.pb({ i, j, coords[i].dist(coords[j]) });
		}
		print("%.2f", kruskal(edges, n, s));
	}
}
