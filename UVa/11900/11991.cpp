#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, q, v, p;
	while (cin >> n >> q) {
		unordered_map<int, vi> pos;
		rep(i, 0, n) {
			cin >> v;
			pos[v].pb(i + 1);
		}
		rep(i, 0, q) {
			cin >> p >> v;
			print(p > sz(pos[v]) ? 0 : pos[v][p - 1]);
		}
	}
}
