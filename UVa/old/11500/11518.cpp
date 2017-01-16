#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m, l, v1, v2;
	forX() {
		cin >> n >> m >> l;
		vvi graph(n);
		for (int i = 0; i < m; i++) {
			cin >> v1 >> v2;
			graph[v1 - 1].push_back(v2 - 1);
		}

		queue<int> q;
		vb used(n);
		for (int i = 0; i < l; i++) {
			cin >> v1;
			used[v1 - 1] = true;
			q.push(v1 - 1);
		}
		
		while (!q.empty()) {
			int v = q.front();
			q.pop();
			for (int e : graph[v]) {
				if (!used[e]) {
					used[e] = true;
					q.push(e);
				}
			}
		}

		int down = 0;
		for (int i = 0; i < n; i++) {
			if (used[i])
				down++;
		}

		printf("%d\n", down);
	}
}
