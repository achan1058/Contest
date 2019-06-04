#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	while (cin >> n >> m) {
		vb good(n + 1);
		vi nums(m);
		read(nums);
		rep(i, 1, n + 1) {
			bool cur = true;
			irep(v, nums) {
				if (i - v >= 0)
					good[i] = good[i] || !good[i - v];
			}
		}
		print("%s wins", good[n] ? "Stan" : "Ollie");
	}
}
