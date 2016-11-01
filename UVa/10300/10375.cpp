#include <bits/stdc++.h>
#include "header.h"

int main() {
	int p, q, r, s;
	while (cin >> p >> q >> r >> s) {
		double ans = 1;
		vi top, bot;
		if (q > p / 2)
			q = p - q;
		if (s > r / 2)
			s = r - s;
		rep(i, 0, q) {
			top.pb(p - i);
			bot.pb(i + 1);
		}
		rep(i, 0, s) {
			bot.pb(r - i);
			top.pb(i + 1);
		}
		while (!top.empty() && !bot.empty()) {
			if (ans > 1) {
				ans /= bot.back();
				bot.pop_back();
			} else {
				ans *= top.back();
				top.pop_back();
			}
		}

		while (!top.empty()) {
			ans *= top.back();
			top.pop_back();
		}
		while (!bot.empty()) {
			ans /= bot.back();
			bot.pop_back();
		}
		printf("%.5f\n", ans);
	}
}
