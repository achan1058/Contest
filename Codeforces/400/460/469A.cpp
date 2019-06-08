#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, t, v;
	cin >> n;
	vb good(n);
	rep(i, 0, 2) {
		cin >> t;
		rep(j, 0, t) {
			cin >> v;
			if (!good[v - 1]) {
				good[v - 1] = true;
				n--;
			}
		}
	}
	print(n == 0 ? "I become the guy." : "Oh, my keyboard!");
}
