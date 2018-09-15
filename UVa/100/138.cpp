#include <bits/stdc++.h>
#include "header.h"

int main() {
	int x = 3, y = 1;
	rep(i, 0, 10) {
		int nx = 3 * x + 8 * y;
		int ny = 3 * y + x;
		x = nx;
		y = ny;
		print("%10d%10d", y, (x - 1) / 2);
	}
}
