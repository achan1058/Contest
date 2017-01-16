#include <bits/stdc++.h>
#include "header.h"

int main() {
	int r, c, n;
	while (cin >> r >> c) {
		vvi anspos(c), ansvalue(c);
		rep(i, 0, r) {
			cin >> n;
			vi pos(n), value(n);
			read(pos);
			read(value);
			rep(j, 0, sz(pos)) {
				anspos[pos[j] - 1].pb(i);
				ansvalue[pos[j] - 1].pb(value[j]);
			}
		}

		printf("%d %d\n", c, r);
		rep(j, 0, c) {
			printf("%d", sz(anspos[j]));
			irep(v, anspos[j])
				printf(" %d", v + 1);
			printf("\n");
			rep(i, 0, sz(ansvalue[j]))
				printf("%d%s", ansvalue[j][i], i < sz(ansvalue[j]) - 1 ? " " : "");
			printf("\n");
		}
	}
}
