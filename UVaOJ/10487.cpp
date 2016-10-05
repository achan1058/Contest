#include <bits/stdc++.h>
#include "header.h"

int main() {
	int X = 1, n, m, mi;
	while (cin >> n && n != 0) {
		vi val(n);
		irep(v, val)
			cin >> v;
		sort(all(val));

		cin >> m;
		printf("Case %d:\n", X);
		rep(i, 0, m) {
			int low = 0, high = n - 1, close = inf, best = 0;
			cin >> mi;
			while (low < high) {
				if (val[low] + val[high] == mi) {
					close = 0;
					best = mi;
					break;
				} else if (val[low] + val[high] > mi) {
					if (val[low] + val[high] - mi < close) {
						close = val[low] + val[high] - mi;
						best = val[low] + val[high];
					}
					high--;
				} else {
					if (mi - val[low] - val[high] < close) {
						close = mi - val[low] - val[high];
						best = val[low] + val[high];
					}
					low++;
				}
			}
			printf("Closest sum to %d is %d.\n", mi, best);
		}
		X++;
	}
}
