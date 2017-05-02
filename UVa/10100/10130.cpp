#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, v, w;
		vi best(31);
		cin >> n;
		rep(i, 0, n) {
			cin >> v >> w;
			rrep(j, 30, w)
				best[j] = max(best[j], best[j - w] + v);
		}

		int ans = 0;
		cin >> n;
		rep(i, 0, n) {
			cin >> w;
			ans += best[w];
		}

		printf("%d\n", ans);
	}
}
