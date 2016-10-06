#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, k, d, x1, x2, y1, y2;
	cin >> N;
	rep(X, 0, N) {
		cin >> k >> d;

		rep(i, 0, k) {
			cin >> x1 >> y1 >> x2 >> y2;

			if ((x1 + x2 + y1 + y2) % 2 != 0) {
				printf("no move\n");
			} else {
				if (x1 == x2 && y1 == y2)
					printf("0\n");
				else if (abs(x1 - x2) == abs(y1 - y2))
					printf("1\n");
				else
					printf("2\n");
			}
		}
	}
}
