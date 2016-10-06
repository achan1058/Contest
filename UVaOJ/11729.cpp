#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, X = 1, x, y;
	while (cin >> n && n != 0) {
		vector<pii> time(n);
		irep(p, time) {
			cin >> x >> y;
			p = { -y, -x };
		}
		sort(all(time));
		int brief = 0, total = 0;
		irep(p, time) {
			brief -= p.y;
			total = max(total, brief - p.x);
		}
		printf("Case %d: %d\n", X, total);
		X++;
	}
}
