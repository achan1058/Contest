#include <bits/stdc++.h>
#include "components.h"

int main() {
	int n, m, v1, v2;
	while (cin >> n >> m && (n | m) != 0) {
		vvi graph(n);
		while (cin >> v1 >> v2 && v1 != -1) {
			graph[v1].pb(v2);
			graph[v2].pb(v1);
		}

		vvi blocks = twoConnected(graph);
		vi count(sz(graph), 0);
		vpii ans;

		irep(b, blocks) {
			irep(v, b)
				count[v]++;
		}
		rep(i, 0, sz(graph))
			ans.pb({ -count[i], i });

		sort(all(ans));
		rep(i, 0, m)
			printf("%d %d\n", ans[i].y, -ans[i].x);
		printf("\n");
	}
}
