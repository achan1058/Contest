#include <bits/stdc++.h>
#include "point.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		vector<pti> p(2 * n);
		read(p);
		pti p1, p2;

		for (p2.x = 0; p2.x <= 500; p2.x++) {
			for (p2.y = -500; p2.y <= 500; p2.y++) {
				int cw = 0, ccw = 0;
				bool good = true;
				rep(i, 0, 2 * n) {
					int d = p1.sa2(p2, p[i]);
					if (d == 0)
						break;
					else if (d > 0)
						cw++;
					else
						ccw++;
				}

				if (cw == n && ccw == n) {
					printf("%d %d\n", p2.y, -p2.x);
					goto end;
				}
			}
		}
	end:;
	}
}
