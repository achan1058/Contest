#include <bits/stdc++.h>
#include "point.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		map<point<ll>, int> height;
		point<ll> p, zero;
		vector<point<ll>> points[2], invisible;
		rep(i, 0, n) {
			cin >> p;
			cin >> height[p];
			if (zero.above(p) > 0)
				points[0].pb(p);
			else
				points[1].pb(p);
		}

		rep(i, 0, 2) {
			if (sz(points[i]) == 0)
				continue;

			zero.angle_sort(all(points[i]));
			int curheight = height[points[i][0]];

			rep(j, 1, sz(points[i])) {
				if (zero.sa2(points[i][j], points[i][j - 1]) != 0 || height[points[i][j]] > curheight)
					curheight = height[points[i][j]];
				else
					invisible.pb(points[i][j]);
			}
		}

		sort(all(invisible));
		printf("Data set %d:\n", X);

		if (invisible.empty())
			printf("All the lights are visible.\n");
		else {
			printf("Some lights are not visible:\n");
			rep(i, 0, sz(invisible))
				printf("x = %lld, y = %lld%c\n", invisible[i].x, invisible[i].y, (i == sz(invisible) - 1 ? '.' : ';'));
		}
	}
}
