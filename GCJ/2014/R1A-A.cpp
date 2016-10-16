#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, L;
	string s;
	forX() {
		cin >> N >> L;
		vl source(N), target(N);

		rep(i, 0, N) {
			cin >> s;
			source[i] = stoll(s, nullptr, 2);
		}
		rep(i, 0, N) {
			cin >> s;
			target[i] = stoll(s, nullptr, 2);
		}

		sort(all(target));
		int best = inf;

		rep(i, 0, N) {
			int flip = 0;
			vl dummy = source;
			rep(j, 0, L) {
				if ((dummy[i] & (1ll << j)) != (target[0] & (1ll << j))) {
					flip++;
					rep(k, 0, N)
						dummy[k] ^= (1ll << j);
				}
			}

			sort(all(dummy));
			bool good = true;

			rep(k, 0, N) {
				if (dummy[k] != target[k]) {
					good = false;
					break;
				}
			}

			if (good)
				best = min(best, flip);
		}

		if (best == inf)
			printp("NOT POSSIBLE\n");
		else
			printp("%d\n", best);
	}
}
