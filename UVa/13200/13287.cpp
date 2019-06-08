#include <bits/stdc++.h>
#include "header.h"

int main() {
	int w, n, v1, v2;
	while (cin >> w) {
		cin >> n;
		int total = 0;
		rep(i, 0, n) {
			cin >> v1 >> v2;
			total += v1 * v2;
		}
		printd(total / w);
	}
}
