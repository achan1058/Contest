#include <bits/stdc++.h>
#include "header.h"

int main() {
	int k, x, y;
	while (cin >> k >> x >> y && (k | x | y) != 0) {
		int cx = 1024, cy = 1024, mx = cx - k, Mx = cx + k, my = cy - k, My = cy + k, ans = 0;
		while (k > 0) {
			if (mx <= x && x <= Mx && my <= y && y <= My)
				ans++;
			if (x > cx)
				cx = Mx;
			else if (x < cx)
				cx = mx;
			else
				break;
			if (y > cy)
				cy = My;
			else if (y < cy)
				cy = my;
			else
				break;
			k /= 2;
			mx = cx - k;
			Mx = cx + k;
			my = cy - k;
			My = cy + k;
		}
		print("%3d", ans);
	}
}
