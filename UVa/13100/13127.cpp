#include <bits/stdc++.h>
#include "shortest_path.h"
#include "header.h"

int main() {
	int n, m, b, p;
	while (cin >> n >> m >> b >> p) {
		adj_list<int> graph(n + 1);
		int v1, v2, t;
		rep(i, 0, m) {
			cin >> v1 >> v2 >> t;
			graph[v1].pb({ v2, t });
			graph[v2].pb({ v1, t });
		}
		vi banks(b);
		read(banks);
		rep(i, 0, p) {
			cin >> v1;
			graph[n].pb({ v1, 0 });
		}
		vi dist = dijkstra(graph, n).f;
		vi ans;
		int best = 0;
		irep(bk, banks) {
			if (dist[bk] > best) {
				best = dist[bk];
				ans.clear();
			}
			if (dist[bk] == best)
				ans.pb(bk);
		}

		sort(all(ans));
		if (best == inf)
			print("%d *", sz(ans));
		else
			print("%d %d", sz(ans), best);
		rep(i, 0, sz(ans))
			printf("%d%c", ans[i], i == sz(ans) - 1 ? '\n' : ' ');
	}
}
