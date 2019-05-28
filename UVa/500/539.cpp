#include <bits/stdc++.h>
#include "header.h"

vvi adj;
vvb used;
int ans, cur;

void backtrack(int n) {
	irep(v, adj[n]) {
		if (!used[n][v]) {
			used[n][v] = used[v][n] = true;
			cur++;
			ans = max(ans, cur);
			backtrack(v);
			used[n][v] = used[v][n] = false;
			cur--;
		}
	}
}

int main() {
	int n, e, v1, v2;
	while (cin >> n >> e && (n | e) != 0) {
		adj = vvi(n);
		used = mb(n, n, false);
		ans = cur = 0;
		rep(i, 0, e) {
			cin >> v1 >> v2;
			adj[v1].pb(v2);
			adj[v2].pb(v1);
		}

		rep(i, 0, n)
			backtrack(i);
		print("%d", ans);
	}
}
