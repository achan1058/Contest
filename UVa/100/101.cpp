#include <bits/stdc++.h>
#include "header.h"

pii findPos(int v, vvi& blocks) {
	rep(i, 0, sz(blocks)) {
		rep(j, 0, sz(blocks[i])) {
			if (blocks[i][j] == v)
				return{ i, j };
		}
	}
}

int main() {
	int n, b1, b2;
	string s1, s2;
	cin >> n;
	vvi blocks(n);

	rep(i, 0, sz(blocks))
		blocks[i].pb(i);
	while (cin >> s1 >> b1 >> s2 >> b2 && s1 != "quit") {
		pii p1 = findPos(b1, blocks), p2 = findPos(b2, blocks);
		vi temp;
		if (p1.x == p2.x)
			continue;
		if (s1 == "move") {
			temp.pb(b1);
			rep(j, p1.y + 1, sz(blocks[p1.x]))
				blocks[blocks[p1.x][j]].pb(blocks[p1.x][j]);
			blocks[p1.x].resize(p1.y);
		} else {
			rep(j, p1.y, sz(blocks[p1.x]))
				temp.pb(blocks[p1.x][j]);
			blocks[p1.x].resize(p1.y);
		}
		if (s2 == "onto") {
			rep(j, p2.y + 1, sz(blocks[p2.x]))
				blocks[blocks[p2.x][j]].pb(blocks[p2.x][j]);
			blocks[p2.x].resize(p2.y + 1);
		}
		fori(v, temp)
			blocks[p2.x].pb(v);
	}
	rep(i, 0, n) {
		printf("%d:", i);
		fori(v, blocks[i])
			printf(" %d", v);
		printf("\n");
	}
}
