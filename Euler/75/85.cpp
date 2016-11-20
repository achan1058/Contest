#include <bits/stdc++.h>
#include "header.h"

inline int numRectangles(int l, int w) {
	return l * (l + 1) * w * (w + 1) / 4;
}

int main() {
	int l = 1, w = 1, target = 2000000, best_diff = target, bestl = 0, bestw = 0;

	while (numRectangles(l, w) < target)
		l++;

	bestl = l - 1;
	bestw = w;
	best_diff = target - numRectangles(l - 1, w);
	while (l >= w) {
		if (abs(target - numRectangles(l, w)) < best_diff) {
			best_diff = abs(target - numRectangles(l, w));
			bestl = l;
			bestw = w;
		}

		if (numRectangles(l, w) < target)
			w++;
		else
			l--;
	}

	printf("%d\n", bestl * bestw);
}
