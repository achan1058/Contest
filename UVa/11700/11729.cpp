#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		int b, j, ans = 0, t = 0;
		vector<pii> ppl;
		rep(i, 0, n) {
			cin >> b >> j;
			ppl.pb({ -j, b });
		}
		sort(all(ppl));

		irep(p, ppl) {
			t += p.second;
			ans = max(ans, t - p.first);
		}
		printc("%d", ans);
	}
}
