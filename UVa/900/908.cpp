#include <bits/stdc++.h>
#include "spanning_tree.h"
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		int v1, v2, k;
		ll cost = 0, c;
		edge_list<ll> edges;
		rep(i, 0, n - 1) {
			cin >> v1 >> v2 >> c;
			cost += c;
			edges.pb({ v1 - 1, v2 - 1, c });
		}
		cin >> k;
		rep(i, 0, k) {
			cin >> v1 >> v2 >> c;
			edges.pb({ v1 - 1, v2 - 1, c });
		}
		cin >> k;
		rep(i, 0, k)
			cin >> v1 >> v2 >> c;

		printX("%lld\n", cost);
		print("%lld", get<0>(kruskal(edges, n)));
	}
}
