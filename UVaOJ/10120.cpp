#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	while (cin >> n >> m && (n | m) != 0) {
		if (n >= 60) {
			printf("Let me try!\n");
			continue;
		}
		set<int> dist[2];
		dist[0].insert(1);
		rep(i, 0, 1000000) {
			int cur = i % 2, d = 2 * i + 3;
			if (sz(dist[cur]) == 0) {
				printf("Don't make fun of me!\n");
				goto end;
			}
			dist[1 - cur].clear();
			fori(v, dist[cur]) {
				if (v == m) {
					printf("Let me try!\n");
					goto end;
				}
				if (v - d >= 1)
					dist[1 - cur].insert(v - d);
				if (v + d <= n)
					dist[1 - cur].insert(v + d);
			}
		}
	end:;
	}
}
