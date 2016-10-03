#include <bits/stdc++.h>
#include "header.h"

int n;
vvi graph;
vb used;
vi ans, cur;
void backtrack(int d = 0) {
	if (n - d <= sz(ans) - sz(cur))
		return;
	bool good = true;
	for (int v : graph[d]) {
		if (used[v])
			good = false;
	}

	if (good) {
		used[d] = true;
		cur.push_back(d);
		if (sz(cur) > sz(ans))
			ans = cur;
		backtrack(d + 1);
		cur.pop_back();
		used[d] = false;
	}
	backtrack(d + 1);
}

int main() {
	int T, e, v1, v2;
	cin >> T;
	for (int X = 0; X < T; X++) {
		cin >> n >> e;
		graph = vvi(n);
		used = vb(n, false);
		cur.clear();
		ans.clear();
		for (int i = 0; i < e; i++) {
			cin >> v1 >> v2;
			graph[v1 - 1].push_back(v2 - 1);
			graph[v2 - 1].push_back(v1 - 1);
		}
		backtrack();
		printf("%d\n", sz(ans));
		for (int i = 0; i < sz(ans); i++)
			printf("%d%c", ans[i] + 1, i == sz(ans) - 1 ? '\n' : ' ');
	}
}
