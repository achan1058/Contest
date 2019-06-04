#include <bits/stdc++.h>
#include "header.h"

int main() {
	vb ans(18001);
	int v, num = 0;
	while (cin >> v) {
		if (v == 0) {
			if (num == 0)
				break;

			int t = 0;
			while (!ans[t])
				t++;
			while (t <= 18000 && ans[t])
				t++;
			if (t <= 18000) {
				print("%02d:%02d:%02d", t / 3600, (t / 60) % 60, t % 60);
			} else {
				print("Signals fail to synchronise in 5 hours");
			}
			ans = vb(18001);
			num = 0;
		} else {
			num++;
			rep(i, 0, 18001) {
				if (i % (2 * v) >= v - 5)
					ans[i] = true;
			}
		}
	}
}
