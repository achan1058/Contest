#include <bits/stdc++.h>
#include "point.h"

int main() {
	ptd gopher, dog, hole;
	int n;
	while (cin >> n >> gopher >> dog) {
		bool escaped = false;
		for (int i = 0; i < n; i++) {
			cin >> hole;
			if (!escaped && gopher.dist2(hole) * 4 <= dog.dist2(hole) + eps) {
				printf("The gopher can escape through the hole at (%.3f,%.3f).\n", hole.x, hole.y);
				escaped = true;
			}
		}
		if (!escaped)
			printf("The gopher cannot escape.\n");
	}
}
