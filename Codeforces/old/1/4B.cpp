#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, total;
	cin >> n >> total;
	vi mn(n), mx(n), hr(n);
	bool good = true;
	rep(i, 0, n) {
		cin >> mn[i] >> mx[i];
		total -= mn[i];
		hr[i] = mn[i];
	}
	if (total < 0) {
		good = false;
	} else {
		rep(i, 0, n) {
			if (total == 0)
				break;
			hr[i] += min(mx[i] - mn[i], total);
			total -= min(mx[i] - mn[i], total);
		}
		if (total > 0)
			good = false;
	}
	printf("%s\n", good ? "YES" : "NO");
	if (good) {
		rep(i, 0, n) {
			printf("%s%d", !good ? " " : "", hr[i]);
			good = false;
		}
		printf("\n");
	}
}
