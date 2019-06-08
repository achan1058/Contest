#include <bits/stdc++.h>
#include "shortest_path.h"
#include "header.h"

int main() {
	forX() {
		int n, e;
		cin >> n >> e;
		adj_list<int> adj(n);
		rep(i, 0, e) {
			int v1, v2, t;
			cin >> v1 >> v2 >> t;
			adj[v1].pb({ v2, t });
		}

		auto dist = bellmanFord(adj, 0).first;
		int good = false;
		rep(i, 0, n) {
			if (dist[i] == -inf) {
				good = true;
				break;
			}
		}
		print(good ? "possible" : "not possible");
	}
}
