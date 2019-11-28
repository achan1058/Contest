#include <bits/stdc++.h>
#include "header.h"

int main() {
	vpii ans(10000001);
	int a = 1, b = 1;
	bool inc = false;
	rep(n, 1, 10000001) {
		ans[n] = { a, b };
		if (inc) {
			a++;
			b--;
			if (b == 0) {
				b = 1;
				inc = false;
			}
		} else {
			a--;
			b++;
			if (a == 0) {
				a = 1;
				inc = true;
			}
		}
	}
	int n;
	while (cin >> n) {
		printf("TERM %d IS %d/%d\n", n, ans[n].x, ans[n].y);
	}
}
