#include <bits/stdc++.h>
#include "header.h"

vi d = { 1, 4, 9, 16, 25, 36, 49, 64, 81, 100 };
typedef tuple<int, int, int> pti;
int dist2(pti p1, pti p2) {
	int dx = get<0>(p2) -get<0>(p1), dy = get<1>(p2) -get<1>(p1), dz = get<2>(p2) -get<2>(p1);
	return dx * dx + dy * dy + dz * dz;
}

int main() {
	int x, y, z;
	vector<pti> points;
	vi bucket(10);
	while (cin >> x >> y >> z && (x | y | z) != 0)
		points.pb(make_tuple(x, y, z));
	rep(i, 0, sz(points)) {
		int md = inf;
		rep(j, 0, sz(points)) {
			if (i == j)
				continue;
			md = min(md, dist2(points[i], points[j]));
		}
		rep(k, 0, 10) {
			if (md < d[k]) {
				bucket[k]++;
				break;
			}
		}
	}

	rep(k, 0, 10)
		printf("%4d", bucket[k]);
	printf("\n");
}
