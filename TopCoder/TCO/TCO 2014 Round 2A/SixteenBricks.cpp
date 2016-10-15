#include <bits/stdc++.h>
#include "header.h"

class SixteenBricks {
public:
	int maximumSurface(vector<int> height) {
		int surface = 0;
		sort(all(height));
		fori(h, height)
			surface += 4 * h + 1;
		return surface - 8 * (height[0] + height[1]) - 6 * (height[2] + height[3] + height[4] + height[5]) - 4 * (height[6] + height[7]);
	}
};
