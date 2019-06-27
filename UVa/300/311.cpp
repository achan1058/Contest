#include <bits/stdc++.h>
#include "header.h"

void distribute0(int s, int& n0) {
	n0 = max(0, n0 - s);
}

void distribute1(int s, int& n0, int& n1) {
	int r = max(0, s - n1);
	n1 = max(0, n1 - s);
	distribute0(4 * r, n0);
}

int main() {
	vi n(6);
	while (read(n) && (n[0] | n[1] | n[2] | n[3] | n[4] | n[5]) != 0) {
		int ans = n[5] + n[4] + n[3];
		distribute0(11 * n[4], n[0]);
		distribute1(5 * n[3], n[0], n[1]);

		ans += (n[2] + 3) / 4;
		if (n[2] % 4 == 1) {
			distribute1(5, n[0], n[1]);
			distribute0(7, n[0]);
		} else if (n[2] % 4 == 2) {
			distribute1(3, n[0], n[1]);
			distribute0(6, n[0]);
		} else if (n[2] % 4 == 3) {
			distribute1(1, n[0], n[1]);
			distribute0(5, n[0]);
		}
		ans += (n[1] + 8) / 9;
		distribute1((n[1] + 8) / 9 * 9, n[0], n[1]);
		ans += (n[0] + 35) / 36;
		print(ans);
	}
}
