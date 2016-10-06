#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, b, h, w;
	while (cin >> n >> b >> h >> w) {
		int mn = inf, c, o;
		rep(i, 0, h) {
			cin >> c;
			rep(j, 0, w) {
				cin >> o;
				if (o >= n && c * n <= b)
					mn = min(mn, c * n);
			}
		}

		if (mn == inf)
			printf("stay home\n");
		else
			printf("%d\n", mn);
	}
}
