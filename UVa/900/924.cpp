#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, t;
	cin >> n;
	vvi adj(n);
	rep(i, 0, n) {
		cin >> t;
		adj[i] = vi(t);
		rep(j, 0, t)
			cin >> adj[i][j];
	}

	cin >> t;
	rep(i, 0, t) {
		int v0, best = 0, best_day;
		cin >> v0;
		queue<int> q;
		vb visited(n);
		q.push(v0);
		visited[v0] = true;

		for (int day = 1; !q.empty(); day++) {
			queue<int> q2;
			int new_user = 0;
			while (!q.empty()) {
				int v = q.front();
				q.pop();

				irep(u, adj[v]) {
					if (!visited[u]) {
						q2.push(u);
						new_user++;
						visited[u] = true;
					}
				}
			}

			if (new_user > best) {
				best = new_user;
				best_day = day;
			}
			q = q2;
		}
		if (best == 0)
			print("0");
		else
			print("%d %d", best, best_day);
	}
}
