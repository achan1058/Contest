#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	forX() {
		cin >> n;
		vi mush(n);
		int total = 0, mx = 0, total2 = 0;
		read(mush);

		rep(i, 0, n - 1) {
			if (mush[i + 1] < mush[i]) {
				total += mush[i] - mush[i + 1];
				mx = max(mx, mush[i] - mush[i + 1]);
			}
		}

		rep(i, 0, n - 1)
			total2 += min(mush[i], mx);

		printp("%d %d\n", total, total2);
	}
}
