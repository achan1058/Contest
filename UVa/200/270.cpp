#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	forX() {
		vector<pii> points;
		if (X == 1)
			getline(cin, s);
		while (getline(cin, s) && s != "") {
			int x0, y0;
			stringstream ss(s);
			ss >> x0 >> y0;
			points.pb({ x0, y0 });
		}

		int best = 0;
		rep(i, 0, sz(points)) {
			map<pii, int> lines;
			rep(j, 0, sz(points)) {
				if (j == i)
					continue;
				int dx = points[j].x - points[i].x, dy = points[j].y - points[i].y, g = gcd(dx, dy);
				if (dx < 0 || (dx == 0 && dy < 0)) {
					dx *= -1;
					dy *= -1;
				}
				dx /= g;
				dy /= g;
				lines[{ dx, dy }]++;
			}

			irep(l, lines)
				best = max(best, l.y);
		}
		printX("%d\n", best + 1);
	}
}
