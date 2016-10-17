#include <bits/stdc++.h>
#include "header.h"

int main() {
	int m, n, t;
	while (cin >> m >> n >> t) {
		vi arr(max(m, n) + t);
		arr[0] = 1;
		rep(i, 0, t) {
			if (arr[i] > 0) {
				arr[i + m] = max(arr[i + m], arr[i] + 1);
				arr[i + n] = max(arr[i + n], arr[i] + 1);
			}
		}

		rrep(i, t, 0) {
			if (arr[i] != 0) {
				printf("%d", arr[i] - 1);
				if (i < t)
					printf(" %d", t - i);
				printf("\n");
				break;
			}
		}
	}
}
