#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		int total = 0, ans = 0;
		vi bricks(n);
		irep(b, bricks) {
			cin >> b;
			total += b;
		}

		total /= n;
		irep(b, bricks)
			ans += max(b - total, 0);

		printf("Set #%d\n", X);
		printf("The minimum number of moves is %d.\n\n", ans);
	}
}
