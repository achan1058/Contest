#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, ans = 0;
	cin >> n;
	vi coins(n);
	read(coins);
	int total = accumulate(all(coins), 0);
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
