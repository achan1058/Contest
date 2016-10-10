#include <bits/stdc++.h>
#include "polygon.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		string s(n, ' '), ans;
		vector<pti> points(n);
		int mx = 0;

		rep(i, 0, n)
			cin >> s[i] >> points[i];
		rep(i, 0, n) {
			rep(j, i + 1, n) {
				rep(k, j + 1, n) {
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
						ans = "";
						ans += s[i];
						ans += s[j];
						ans += s[k];
						mx = area;
					}
				}
			}
		}

		sort(all(ans));
		printf("%s\n", ans.c_str());
	}
}
