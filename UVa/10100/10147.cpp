#include <bits/stdc++.h>
#include "point.h"
#include "spanning_tree.h"
#include "header.h"

int main() {
	forX() {
		int n, k, v1, v2;
		cin >> n;
		edge_list<int> e;
		vector<pti> p(n);
		read(p);
		drep(i, j, n, i)
			e.pb({ j, i, p[i].dist2(p[j]) });

		cin >> k;
		rep(i, 0, k) {
			cin >> v1 >> v2;
			e.pb({ v1 - 1, v2 - 1, 0 });
		}

		auto ans = get<2>(kruskal(e, n));
		bool first = true;
		printX();
		irep(a, ans) {
			if (get<2>(a) != 0) {
				print(get<0>(a) + 1, get<1>(a) + 1);
				first = false;
			}
		}
		if (first)
			print("No new highways need");
	}
}
