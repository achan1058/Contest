#include <bits/stdc++.h>
#include "point.h"

int main() {
	int x, y;
	while (cin >> x >> y && (x | y) != 0) {
		vector<pti> points;
		do {
			points.pb(pti(x, y));
		} while (cin >> x >> y && (x | y) != 0);

		sort(all(points));
		vvb proc = mb(400, 400, false);

		bool found = false;
		rep(i, 0, sz(points)) {
			rep(j, i + 1, sz(points)) {
				if (proc[i][j])
					continue;

				vi line_index;
				line_index.pb(i);
				line_index.pb(j);

				rep(k, j + 1, sz(points)) {
					if (points[i].sa2(points[j], points[k]) == 0)
						line_index.pb(k);
				}

				if (sz(line_index) >= 3) {
					if (!found) {
						printf("The following lines were found:\n");
						found = true;
					}

					irep(p, line_index)
						printf("(%4d,%4d)", points[p].x, points[p].y);
					printf("\n");

					irep(p1, line_index) {
						irep(p2, line_index)
							proc[p1][p2] = true;
					}
				}
			}
		}

		if (!found)
			printf("No lines were found\n");
	}
}
