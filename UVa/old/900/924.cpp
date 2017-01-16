#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, e, v, t;
	cin >> n;
	vvi graph(n);
	for (int i = 0; i < n; i++) {
		cin >> e;
		for (int j = 0; j < e; j++) {
			cin >> v;
			graph[i].pb(v);
		}
	}
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> v;
		queue<int> todo;
		vector<bool> visited(n, false);
		todo.push(v);
		visited[v] = true;
		int most = 0, day = 0;

		for (int d = 1; !todo.empty(); d++) {
			queue<int> next;
			int boom = 0;
			while (!todo.empty()) {
				int x = todo.front();
				todo.pop();

				for (auto& y : graph[x]) {
					if (!visited[y]) {
						visited[y] = true;
						next.push(y);
						boom++;
					}
				}
			}

			if (boom > most) {
				most = boom;
				day = d;
			}
			todo = next;
		}

		if (most == 0)
			printf("0\n");
		else
			printf("%d %d\n", most, day);
	}
}
