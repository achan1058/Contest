#include <bits/stdc++.h>
#include "segment.h"

int main() {
	int n;
	ptd m;
	while (cin >> m) {
		cin >> n;
		vector<ptd> rail(n + 1);
		read(rail);
		ptd best = rail[0];
		double bestd = m.dist2(rail[0]);
		rep(i, 1, sz(rail)) {
			ptd cur = Segment<double>(rail[i - 1], rail[i]).closest(m);
			if (m.dist2(cur) < bestd) {
				bestd = m.dist2(cur);
				best = cur;
			}
		}

		printf("%.4f\n%.4f\n", best.x, best.y);
	}
}
