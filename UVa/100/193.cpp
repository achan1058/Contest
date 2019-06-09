#include <bits/stdc++.h>
#include "header.h"

vi cur, best;
vvi adj;
vb used;
int numv;
void backtrack(int n = 0) {
	if (n == numv) {
		if (sz(cur) > sz(best))
			best = cur;
		return;
	}

	bool good = true;
	irep(v, adj[n]) {
		if (used[v]) {
			good = false;
			break;
		}
	}

	if (good) {
		cur.pb(n);
		used[n] = true;
		backtrack(n + 1);
		used[n] = false;
		cur.pop_back();
	}
	backtrack(n + 1);
}

int main() {
	forX() {
		int e, v1, v2;
		cin >> numv >> e;
		adj = vvi(numv);
		used = vb(numv);
		best.clear();
		rep(i, 0, e) {
			cin >> v1 >> v2;
			adj[v1 - 1].pb(v2 - 1);
			adj[v2 - 1].pb(v1 - 1);
		}
		backtrack();
		irep(v, best)
			v++;
		print(sz(best));
		print(best);
	}
}
