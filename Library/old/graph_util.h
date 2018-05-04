#pragma once
#include <bits/stdc++.h>
using namespace std;

bool isBipartite(const vvi& graph) {
	int n = sz(graph);
	vi color(n);
	rep(i, 0, n) {
		if (color[i] != 0)
			continue;
		queue<int> q;
		q.push(i);
		color[i] = 1;
		while (!q.empty()) {
			int v = q.front();
			q.pop();
			irep(e, graph[v]) {
				if (color[e] == color[v])
					return false;
				else if (color[e] == 0) {
					color[e] = 3 - color[v];
					q.push(e);
				}
			}
		}
	}
	return true;
}

// delete me?
vvi getComponents(const vvi& graph) {
	int n = sz(graph);
	vb used(n);
	vvi comps;
	rep(i, 0, n) {
		if (used[i])
			continue;
		queue<int> q;
		q.push(i);
		comps.pb({ i });
		used[i] = true;
		while (!q.empty()) {
			int v = q.front();
			q.pop();
			irep(e, graph[v]) {
				if (!used[e]) {
					used[e] = true;
					q.push(e);
					comps.back().pb(e);
				}
			}
		}
	}
	return comps;
}
