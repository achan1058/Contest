#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, d, e;
	while (cin >> n && n != 0) {
		vvi graph(n);
		queue<int> q;
		int ans = 0;
		rep(i, 0, n) {
			cin >> d;
			rep(j, 0, d) {
				cin >> e;
				graph[i].pb(e - 1);
			}
			if (d == 1)
				q.push(i);
		}

		while (!q.empty()) {
			int v = q.front();
			q.pop();

			if (sz(graph[v]) != 0) {
				int v2 = graph[v][0];
				fori(e2, graph[v2]) {
					int v3 = e2;
					fori(e3, graph[v3]) {
						if (e3 == v2) {
							swap(e3, graph[v3].back());
							graph[v3].resize(sz(graph[v3]) - 1);
							break;
						}
					}

					if (sz(graph[v3]) == 1 && v3 != v)
						q.push(v3);
				}

				graph[v2].clear();
				ans++;
			}
		}

		printf("%d\n", max(ans, 1));
	}
}
