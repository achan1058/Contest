#include <bits/stdc++.h>
#include "header.h"

int best = 0;
vvb used;
vvi adjlist;
void backtrack(int v, int d = 0) {
	best = max(best, d);
	for (int v2 : adjlist[v]) {
		if (!used[v][v2]) {
			used[v][v2] = used[v2][v] = true;
			backtrack(v2, d + 1);
			used[v][v2] = used[v2][v] = false;
		}
	}
}

int main() {
	int n, m, v1, v2;
	while (cin >> n >> m && (n | m) != 0) {
		adjlist = vvi(n);
		used = mb(n, n, false);
		best = 0;

		for (int i = 0; i < m; i++) {
			cin >> v1 >> v2;
			adjlist[v1].push_back(v2);
			adjlist[v2].push_back(v1);
		}
		for (int i = 0; i < n; i++)
			backtrack(i);

		printf("%d\n", best);
	}
}
