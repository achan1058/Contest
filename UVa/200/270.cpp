#include <bits/stdc++.h>
#include "number_theory.h"

int main() {
	int N, X = 0;
	vector<pii> points;
	string s;
	cin >> N;
	getline(cin, s);
	getline(cin, s);
	while (X < N) {
		if (!getline(cin, s) || s == "") {
			int best = 0;
			printf("%s", X > 0 ? "\n" : "");
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
			printf("%d\n", best + 1);
			points.clear();
			X++;
		} else {
			int x0, y0;
			stringstream ss;
			ss << s;
			ss >> x0 >> y0;
			points.pb({ x0, y0 });
		}
	}
}
