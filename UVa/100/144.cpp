#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k;
	while (cin >> n >> k && (n | k) != 0) {
		queue<pii> q;
		rep(i, 1, n + 1)
			q.push({ i, 40 });
		
		int cur = 1, store = 0;
		while (!q.empty()) {
			pii p = q.front();
			q.pop();
			if (store == 0) {
				store = cur;
				cur = (cur == k ? 1 : cur + 1);
			}
			if (p.y <= store) {
				store -= p.y;
				printf("%3d", p.x);
				continue;
			}
			p.y -= store;
			store = 0;
			q.push(p);
		}
		printf("\n");
	}
}
