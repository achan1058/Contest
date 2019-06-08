#include <bits/stdc++.h>
#include "shortest_path.h"
#include "header.h"

int main() {
	int n;
	string s;
	cin >> n;
	adj_list<int> graph(n);
	drep(i, j, n - 1, i + 1) {
		cin >> s;
		if (s == "x")
			continue;
		graph[i + 1].pb({ j, stoi(s) });
		graph[j].pb({ i + 1, stoi(s) });
	}

	vi dist = dijkstra(graph, 0).first;
	int ans = 0;
	irep(d, dist)
		ans = max(ans, d);
	printv(ans);
}
