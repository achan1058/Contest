#include <bits/stdc++.h>
#include "header.h"

int findInc(const vi& height, const vi& width) {
	vi best = width;
	drep(i, j, sz(height), i) {
		if (height[i] > height[j])
			best[i] = max(best[i], best[j] + width[i]);
	}
	return *max_element(all(best));
}

int main() {
	forX() {
		int n;
		cin >> n;
		vi height(n), width(n);
		read(height);
		read(width);

		int inc = findInc(height, width);
		reverse(all(height));
		reverse(all(width));
		int dec = findInc(height, width);

		if (inc >= dec)
			printf("Case %d. Increasing (%d). Decreasing (%d).\n", X, inc, dec);
		else
			printf("Case %d. Decreasing (%d). Increasing (%d).\n", X, dec, inc);
	}
}
