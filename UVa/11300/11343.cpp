#include <bits/stdc++.h>
#include "segment.h"
#include "header.h"

int main() {
	forX() {
		int n, x1, x2, y1, y2;
		cin >> n;
		vb good(n, true);
		vector<Segment<int>> seg(n);
		irep(s, seg) {
			cin >> x1 >> y1 >> x2 >> y2;
			s = Segment<int>(x1, y1, x2, y2);
		}
		int total = 0;
		rep(i, 0, n) {
			if (!good[i])
				continue;
			rep(j, 0, n) {
				if (i != j && seg[i].intersect(seg[j]) >= 0) {
					good[i] = good[j] = false;
					break;
				}
			}
			if (good[i])
				total++;
		}
		printf("%d\n", total);
	}
}
