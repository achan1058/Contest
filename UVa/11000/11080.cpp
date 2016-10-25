#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, e, v1, v2;
	forX() {
		cin >> n >> e;
		vvi graph(n);
		vi used(n, -1);
		int total = 0;
		for (int i = 0; i < e; i++) {
			cin >> v1 >> v2;
			graph[v1].pb(v2);
			graph[v2].pb(v1);
		}
		for (int i = 0; i < n; i++) {
			if (used[i] == -1) {
				int vtx = 0, comp = 0;
				queue<int> q;
				used[i] = 1;
				q.push(i);

				while (!q.empty()) {
					int v = q.front();
					q.pop();
					vtx++;
					if (used[v] == 0)
						comp++;
					for (auto edge : graph[v]) {
						if (used[edge] == used[v]) {
							total = -1;
							goto end;
						} else if (used[edge] == -1) {
							used[edge] = 1 - used[v];
							q.push(edge);
						}
					}
				}
				total += max(1, min(comp, vtx - comp));
			}
		}
	end:;
		printf("%d\n", total);
	}
}
