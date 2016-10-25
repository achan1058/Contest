#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		vi ans(n), guess(n);
		printf("Game %d:\n", X);
		irep(v, ans)
			cin >> v;
		while (true) {
			int non_zero = 0;
			irep(v, guess) {
				cin >> v;
				non_zero |= v;
			}
			if (!non_zero)
				break;

			vb used(n), check(n);
			int strong = 0, weak = 0;
			rep(i, 0, n) {
				if (ans[i] == guess[i]) {
					strong++;
					used[i] = check[i] = true;
				}
			}
			rep(i, 0, n) {
				if (used[i])
					continue;
				rep(j, 0, n) {
					if (!check[j] && ans[i] == guess[j]) {
						weak++;
						used[i] = check[j] = true;
						break;
					}
				}
			}
			printf("    (%d,%d)\n", strong, weak);
		}
	}
}
