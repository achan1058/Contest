#include <bits/stdc++.h>
#include "util.h"
#include "header.h"

int main() {
	string s;
	while (cin >> s && s != "#") {
		vs strs = tokenizer(s, [](int c) {return c == ';' ? 1 : 0; }, false);
		Index<char> vtx_map;

		rep(c, 'A', 'Z' + 1) {
			if (s.find(c) != s.npos) 
				vtx_map.getI(c);
		}

		int n = sz(vtx_map);
		vvb edges = mb(n, n, 0);
		
		irep(str, strs) {
			int v = vtx_map.getI(str[0]);
			rep(i, 2, sz(str)) {
				int u = vtx_map.getI(str[i]);
				edges[u][v] = edges[v][u] = true;
			}
		}

		vi nodes(n), best;
		iota(all(nodes), 0);
		int bestdist = inf;

		do {
			int dist = 0;
			drep(i, j, n, i) {
				if (edges[nodes[i]][nodes[j]]) {
					dist = max(dist, i - j);
					if (dist >= bestdist)
						goto endloop;
				}
			}
			best = nodes;
			bestdist = dist;
		endloop:;
		} while (next_permutation(all(nodes)));
		irep(v, best)
			printf("%c ", vtx_map.getL(v));
		printf("-> %d\n", bestdist);
	}
}
