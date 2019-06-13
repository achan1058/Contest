#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	vi pearls;
	while (cin >> n) {
		if (n != 0) {
			pearls.pb(n);
			continue;
		}
		if (pearls.empty())
			break;
		sort(all(pearls));
		if (sz(pearls) % 2 == 0) {
			print("NO");
		} else {
			bool good = true;
			rep(i, 0, sz(pearls) / 2) {
				if (pearls[2 * i] != pearls[2 * i + 1]) {
					good = false;
					break;
				}
			}
			if (good) {
				rep(i, 0, sz(pearls) / 2)
					printf("%d ", pearls[2 * i]);
				printv(pearls[sz(pearls) - 1]);
				rrep(i, sz(pearls) / 2 - 1, 0)
					printf(" %d", pearls[2 * i]);
				print();
			} else {
				print("NO");
			}
		}
		pearls.clear();
	}
}
