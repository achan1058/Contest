#include <bits/stdc++.h>
#include "header.h"

int main() {
	int s, t, n;
	whileX(cin >> s >> t >> n && (s | t | n) != 0) {
		vi dist(10000, inf);
		vi moves(n);
		read(moves);
		queue<int> q;
		q.push(s);
		dist[s] = 0;
		while (!q.empty()) {
			int v = q.front();
			q.pop();
			irep(m, moves) {
				int nv = (v + m) % 10000;
				if (dist[v] + 1 < dist[nv]) {
					dist[nv] = dist[v] + 1;
					q.push(nv);
				}
			}
		}
		if (dist[t] == inf)
			printc("Permanently Locked");
		else
			printc("%d", dist[t]);
	}
}
