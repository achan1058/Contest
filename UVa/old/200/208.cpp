#include <bits/stdc++.h>
#include "header.h"

int n, ct;
vi ans;
vb used;
vvi graph;
bool bfs(int s, int t) {
	priority_queue<int> q;
	vb bfsused(20);
	q.push(s);
	bfsused[s] = true;

	while (!q.empty()) {
		int v = q.top();
		q.pop();
		irep(e, graph[v]) {
			if (used[e] || bfsused[e])
				continue;
			if (e == t)
				return true;
			q.push(e);
			bfsused[e] = true;
		}
	}
	return false;
}

void backtrack() {
	if (ans.back() == n) {
		rep(i, 0, sz(ans))
			printf("%d%s", ans[i] + 1, i == sz(ans) - 1 ? "\n" : " ");

		ct++;
		return;
	} else if (!bfs(ans.back(), n))
		return;
	irep(v, graph[ans.back()]) {
		if (!used[v]) {
			used[v] = true;
			ans.pb(v);
			backtrack();
			used[v] = false;
			ans.pop_back();
		}
	}
}

int main() {
	ans = vi(1);
	whileX(cin >> n) {
		int v1, v2;
		graph = vvi(20);
		ct = 0;
		used = vb(20);
		n--;

		while (cin >> v1 >> v2 && (v1 | v2) != 0) {
			graph[v1 - 1].pb(v2 - 1);
			graph[v2 - 1].pb(v1 - 1);
		}

		rep(i, 0, 20)
			sort(all(graph[i]));

		printf("CASE %d:\n", X);
		used[0] = true;
		backtrack();
		printf("There are %d routes from the firestation to streetcorner %d.\n", ct, n + 1);
	}
}
