#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, p, w, ans = 0, m;
		cin >> n;

		vi best(31);
		rep(i, 0, n) {
			cin >> p >> w;
			rrep(j, 30, w)
				best[j] = max(best[j], best[j - w] + p);
		}

		cin >> m;
		rep(i, 0, m) {
			cin >> w;
			ans += best[w];
		}
		print("%d", ans);
	}
}
