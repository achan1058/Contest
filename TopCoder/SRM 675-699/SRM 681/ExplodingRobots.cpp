#include <bits/stdc++.h>
#include "header.h"

class ExplodingRobots {
public:
	string canExplode(int x1, int y1, int x2, int y2, string instructions) {
		int Mx1 = x1, mx1 = x1, My1 = y1, my1 = y1, Mx2 = x2, mx2 = x2, My2 = y2, my2 = y2;
		fori(c, instructions) {
			if (c == 'U') {
				My1++;
				My2++;
			} else if (c == 'D') {
				my1--;
				my2--;
			} else if (c == 'L') {
				mx1--;
				mx2--;
			} else if (c == 'R') {
				Mx1++;
				Mx2++;
			}
		}

		if (My1 < my2 || My2 < my1 || Mx1 < mx2 || Mx2 < mx1)
			return "Safe";
		else
			return "Explosion";
	}
};
