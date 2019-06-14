#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, l, total = 0;
		cin >> n >> l;
		bool good = true;
		vi target(n), limit(n);
		read(target);
		read(limit);
		rep(i, 0, n) {
			if (target[i] > limit[i]) {
				good = false;
				break;
			}
			total += target[i];
		}
		printc(good&& total <= l ? "Yes" : "No");
	}
}
