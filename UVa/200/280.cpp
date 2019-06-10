#include <bits/stdc++.h>
#include "shortest_path.h"
#include "header.h"

int main() {
	int n, v1, v2, k;
	while (cin >> n && n != 0) {
		vvi graph = mi(n, n, inf);
		while (cin >> v1 && v1 != 0) {
			while (cin >> v2 && v2 != 0)
				graph[v1 - 1][v2 - 1] = 0;
		}

		vvi dist = floyd(graph).first;
		cin >> k;
		rep(i, 0, k) {
			vi ans;
			cin >> v1;
			rep(v, 0, n) {
				if (dist[v1 - 1][v] == inf)
					ans.pb(v + 1);
			}
			printv(sz(ans));
			irep(v, ans)
				printf(" %d", v);
			print();
		}
	}
}
