#include <bits/stdc++.h>
#include "header.h"

int nx(int n) {
	int ans = 0;
	while (n > 0) {
		ans += (n % 10) * (n % 10);
		n /= 10;
	}
	return ans;
}
int main() {
	vi good(10000001);
	int ans = 1;
	good[1] = -1;
	good[89] = 1;
	rep(i, 2, 10000001) {
		int cur = i;
		vi chain;
		while (good[cur] == 0) {
			chain.pb(cur);
			cur = nx(cur);
		}
		irep(v, chain)
			good[v] = good[cur];
		if (good[cur] == 1)
			ans += sz(chain);
	}
	printf("%d\n", ans);
}
