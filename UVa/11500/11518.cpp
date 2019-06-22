#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, e, k, v1, v2;
		cin >> n >> e >> k;
		vvi graph(n);
		rep(i, 0, e) {
			cin >> v1 >> v2;
			graph[v1 - 1].pb(v2 - 1);
		}

		int ans = 0;
		vb down(n);
		queue<int> q;
		rep(i, 0, k) {
			cin >> v1;
			if (down[v1 - 1])
				continue;
			down[v1 - 1] = true;
			ans++;
			q.push(v1 - 1);
		}

		while (!q.empty()) {
			v1 = q.front();
			q.pop();
			irep(v, graph[v1]) {
				if (down[v])
					continue;
				down[v] = true;
				ans++;
				q.push(v);
			}
		}
		print(ans);
	}
}
