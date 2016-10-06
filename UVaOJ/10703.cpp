#include <bits/stdc++.h>
#include "header.h"

int main() {
	int w, h, n, x1, y1, x2, y2;
	while (cin >> w >> h >> n && (w | h | n) != 0) {
		vvb arr = mb(w, h, false);
		rep(i, 0, n) {
			cin >> x1 >> y1 >> x2 >> y2;
			if (x1 > x2)
				swap(x1, x2);
			if (y1 > y2)
				swap(y1, y2);

			rep(i, x1 - 1, x2)
				rep(j, y1 - 1, y2)
				arr[i][j] = true;
		}

		int total = 0;
		rep(i, 0, w)
			rep(j, 0, h)
			if (!arr[i][j])
				total++;
		if (total == 0)
			printf("There is no empty spots.\n");
		else if (total == 1)
			printf("There is one empty spot.\n");
		else
			printf("There are %d empty spots.\n", total);
	}
}
