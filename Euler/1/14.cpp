#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi len(1000001);
	int maxv = 0, maxi = 0;
	len[1] = 1;
	rep(n, 2, 1000001) {
		if (len[n] > 0)
			continue;
		vl list;
		ll cur = n;
		while (cur > 1000000 || len[int(cur)] == 0) {
			list.pb(cur);
			cur = (cur % 2 == 0 ? cur / 2 : 3 * cur + 1);
		}
		rep(i, 1, sz(list) + 1) {
			if (list[sz(list) - i] <= 1000000)
				len[int(list[sz(list) - i])] = len[int(cur)] + i;
		}
	}
	rep(n, 1, 1000001) {
		if (len[n] > maxv) {
			maxv = len[n];
			maxi = n;
		}
	}
	printf("%d\n", maxi);
}
