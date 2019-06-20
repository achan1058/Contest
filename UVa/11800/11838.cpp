#include <bits/stdc++.h>
#include "components.h"
#include "header.h"

int main() {
	int v, e, v1, v2, d;
	while (cin >> v >> e && (v | e) != 0) {
		vvi graph(v);
		rep(i, 0, e) {
			cin >> v1 >> v2 >> d;
			graph[v1 - 1].pb(v2 - 1);
			if (d == 2)
				graph[v2 - 1].pb(v1 - 1);
		}
		print(stronglyConnected(graph).first == 1 ? 1 : 0);
	}
}
