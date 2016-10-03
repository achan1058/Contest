#include <bits/stdc++.h>
#include "header.h"

int main() {
	int x1, x2, y;
	bool first = true;
	vi height(10002);
	while (cin >> x1 >> y >> x2) {
		rep(i, x1, x2)
			height[i + 1] = max(height[i + 1], y);
	}
	rep(i, 1, 10001) {
		if (height[i] != height[i - 1]) {
			printf("%s%d %d", first ? "" : " ", i - 1, height[i]);
			first = false;
		}
	}
	printf("\n");
}
