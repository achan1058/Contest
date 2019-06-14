#include <bits/stdc++.h>
#include "header.h"

int main() {
	int j, r, v;
	while (cin >> j >> r) {
		vi points(j);
		drep(i, k, r, j) {
			cin >> v;
			points[k] += v;
		}
		int ans = 0;
		rep(i, 0, j) {
			if (points[i] >= points[ans])
				ans = i;
		}
		print(ans + 1);
	}
}
