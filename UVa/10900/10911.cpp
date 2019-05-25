#include <bits/stdc++.h>
#include "point.h"
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		string s;
		vvd dist = md(2 * n, 2 * n, inf);
		vi perm;
		vector<ptd> houses(2 * n);
		irep(h, houses)
			cin >> s >> h;
		drep(i, j, 2 * n, i)
			dist[i][j] = dist[j][i] = houses[i].dist(houses[j]);

		vd ans(1 << (2 * n), inf);
		ans[0] = 0;
		rep(k, 0, 1 << (2 * n)) {
			if (bits(k) == 1)
				continue;
			drep(i, j, 2 * n, i) {
				if ((k & (1 << i)) && (k & (1 << j)))
					ans[k] = min(ans[k], ans[k - (1 << i) - (1 << j)] + dist[i][j]);
			}
		}

		printc("%.2f", ans[(1 << (2 * n)) - 1]);
	}
}
