#include <bits/stdc++.h>
#include "utils.h"
#include "shortest_path.h"
#include "header.h"

int main() {
	int n, k;
	whileX(cin >> n >> k && (n | k) != 0) {
		mapper<string> cities;
		string s1, s2;
		vvi graph = mi(n, n, 0);
		int w;
		rep(i, 0, k) {
			cin >> s1 >> s2 >> w;
			int v1 = cities.map(s1), v2 = cities.map(s2);
			graph[v1][v2] = graph[v2][v1] = -w;
		}
		vvi dist = floyd(graph, true).x;
		cin >> s1 >> s2;
		int v1 = cities.map(s1), v2 = cities.map(s2);
		print("Scenario #%d", X);
		print("%d tons\n", -dist[v1][v2]);
	}
}
