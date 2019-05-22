#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k;
	while (cin >> n >> k && (n | k) != 0) {
		if (n == 1 && k == 1) {
			print("0 1");
			continue;
		}
		for (int d = 1; ; d++) {
			int h = int(round(pow(k, 1. / d)));
			int tn = 1, tk = 1, ans1 = 0, ans2 = 0;
			rep(i, 0, d) {
				ans1 += tk;
				ans2 += tk * (n / tn);
				tn *= h + 1;
				tk *= h;
			}
			if (tn == n && tk == k) {
				print("%d %d", ans1, ans2 + k);
				break;
			}
		}
	}
}
