#include <bits/stdc++.h>
#include "point.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		bool cw = true, ccw = true;
		vector<pti> pts(n);
		fori(p, pts)
			cin >> p;
		rep(i, 0, n) {
			if (pts[i].sa2(pts[(i + 1) % n], pts[(i + 2) % n]) < 0)
				ccw = false;
			else
				cw = false;
		}
		printf("%s\n", ccw || cw ? "No" : "Yes");
	}
}
