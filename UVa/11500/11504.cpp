#include <bits/stdc++.h>
#include "components.h"
#include "header.h"

int main() {
	forX() {
		int n, e, v1, v2;
		cin >> n >> e;
		vvi graph(n);
		rep(i, 0, e) {
			cin >> v1 >> v2;
			graph[v1 - 1].pb(v2 - 1);
		}

		auto ans = stronglyConnected(graph);
		vb hit(ans.first);
		rep(i, 0, n) {
			irep(v, graph[i]) {
				if (ans.second[i] != ans.second[v])
					hit[ans.second[v]] = true;
			}
		}

		int out = 0;
		irep(b, hit)
			out += b ? 0 : 1;
		print(out);
	}
}
