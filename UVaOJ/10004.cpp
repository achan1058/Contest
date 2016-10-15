#include <bits/stdc++.h>
#include "header.h"

bool bicolor(const vvi& graph) {
	vi color(sz(graph), -1);
	queue<int> q;
	q.push(0);
	color[0] = 0;
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		fori(e, graph[v]) {
			if (color[e] == color[v])
				return false;
			else if (color[e] == -1) {
				color[e] = 1 - color[v];
				q.push(e);
			}
		}
	}
	return true;
}

int main() {
	int n, e, s, t;
	while (cin >> n && n != 0) {
		vvi graph(n);
		cin >> e;
		rep (i, 0, e) {
			cin >> s >> t;
			graph[s].pb(t);
			graph[t].pb(s);
		}
		printf("%sBICOLORABLE.\n", bicolor(graph) ? "" : "NOT ");
	}
}
