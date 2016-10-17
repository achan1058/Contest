#include <bits/stdc++.h>
#include "header.h"

int main() {
	vb time(5 * 60 * 60 + 1, true);
	int n;
	bool nonempty = false;

	while (cin >> n) {
		if (n != 0) {
			int cur = 0;
			nonempty = true;
			while(true) {
				rep(j, n - 5, 2 * n) {
					if (j + cur > 5 * 60 * 60)
						goto end;
					time[j + cur] = false;
				}
				cur += 2 * n;
			}
		} else if (nonempty) {
			int state = 0;
			rep(i, 0, 5 * 60 * 60 + 1) {
				if (!time[i] && state == 0)
					state = 1;
				else if (time[i] && state == 1) {
					int h = i / 60 / 60, m = (i / 60) % 60, s = i % 60;
					printf("%02d:%02d:%02d\n", h, m, s);
					state = 2;
					break;
				}
			}

			if (state != 2)
				printf("Signals fail to synchronise in 5 hours\n");

			nonempty = false;
			time = vb(5 * 60 * 60 + 1, true);
		} else {
			return 0;
		}
	end:;
	}
}
