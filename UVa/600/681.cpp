#include <bits/stdc++.h>
#include "graham.h"

int main() {
	int N, n;
	cin >> N;
	printf("%d\n", N);
	rep(X, 0, N) {
		cin >> n;
		printf("%s", X > 0 ? "-1\n" : "");
		vector<pti> pts(n);
		fori(p, pts)
			cin >> p.y >> p.x;
		vector<pti> hull = graham(pts);
		printf("%d\n%d %d\n", sz(hull) + 1, hull[0].y, hull[0].x);
		rrep(i, sz(hull) - 1, 0)
			printf("%d %d\n", hull[i].y, hull[i].x);
		cin >> n;
	}
}
