#include <bits/stdc++.h>
#include "header.h"

vi d = { 1, 2, 4, 10, 20, 40 };
int main() {
	vi coins(6);
	while (true) {
		bool zero = true;
		irep(v, coins) {
			cin >> v;
			zero &= v == 0;
		}
		if (zero)
			break;

		double amount;
		cin >> amount;
		int a = (int)(amount * 20 + eps);
		vi num_coins(a + 50, inf);
		num_coins[0] = 0;
		rep(i, 0, 6) {
			rrep(j, sz(num_coins) - 1, 0) {
				rep(k, 0, coins[i] + 1) {
					if (j + k * d[i] >= sz(num_coins))
						break;
					num_coins[j + k * d[i]] = min(num_coins[j + k * d[i]], num_coins[j] + k);
				}
			}
		}
		rep(i, 0, 6) {
			rrep(j, sz(num_coins) - 1, a + d[i])
				num_coins[j - d[i]] = min(num_coins[j - d[i]], num_coins[j] + 1);
		}

		printf("%3d\n", num_coins[a]);
	}
}
