#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, total = 0, ans = 0;
	cin >> n;
	vi coins(n);
	fori(c, coins) {
		cin >> c;
		total += c;
	}
	total /= 2;
	sort(all(coins));
	rrep(i, n - 1, 0) {
		if (total < 0)
			break;
		total -= coins[i];
		ans++;
	}
	printf("%d\n", ans);
}
