#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, x, y, z, dx = 0, dy = 0, dz = 0;
	cin >> n;
	rep(i, 0, n) {
		cin >> x >> y >> z;
		dx += x;
		dy += y;
		dz += z;
	}
	print((dx | dy | dz) == 0 ? "YES" : "NO");
}
