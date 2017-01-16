#include <bits/stdc++.h>
#include "polygon.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		string s(n, ' '), ans(3, ' ');
		vector<pti> points(n);
		int mx = 0;

		rep(i, 0, n)
			cin >> s[i] >> points[i];
		drep(i, j, n, i) {
			rep(k, 0, j) {
				vector<pti> pt = { points[i], points[j], points[k] };
				Polygon<int> poly(pt);
				int area = abs(poly.sa2());

				if (area <= mx)
					continue;
				bool good = true;
				rep(l, 0, n) {
					if (l != i && l != j && l != k && poly.inPolygon(points[l]) != -1) {
						good = false;
						break;
					}
				}

				if (good) {
					ans[0] = s[i];
					ans[1] = s[j];
					ans[2] = s[k];
					mx = area;
				}
			}
		}

		sort(all(ans));
		printf("%s\n", ans.c_str());
	}
}
