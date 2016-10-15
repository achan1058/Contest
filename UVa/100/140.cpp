#include <bits/stdc++.h>
#include "util.h"

int main() {
	string s;
	while (getline(cin, s) && s != "#") {
		vs str = tokenizer(s, [](int c) {return c == ';' ? 1 : 0; }, false);
		Index<char> vtx_map;

		rep(c, 'A', 'Z' + 1) {
			if (s.find(c) != s.npos)
				vtx_map.getI(c);
		}

		int n = sz(vtx_map);
		vvi mat = mi(n, n, 0);
		irep(vtx, str) {
			int v1 = vtx_map.getI(vtx[0]);
			rep(j, 2, sz(vtx)) {
				int v2 = vtx_map.getI(vtx[j]);
				mat[v1][v2] = 1;
				mat[v2][v1] = 1;
			}
		}

		vi perm(n), best;
		int best_band = inf;

		rep(i, 0, n)
			perm[i] = i;
		do {
			int band = 0;
			rrep(j, n - 1, 0) {
				rep(i, 0, n - j) {
					if (mat[perm[i]][perm[i + j]] == 1) {
						band = j;
						goto endloop;
					}
				}
			}
		endloop:;

			if (band < best_band) {
				best_band = band;
				best = perm;
			}
		} while (next_permutation(all(perm)));
		irep(b, best)
			printf("%c ", vtx_map.getL(b));
		printf("-> %d\n", best_band);
	}
}
