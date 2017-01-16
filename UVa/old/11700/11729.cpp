#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, x, y;
	whileX (cin >> n && n != 0) {
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
		printc("%d\n", total);
	}
}
