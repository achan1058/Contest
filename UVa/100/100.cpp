#include <bits/stdc++.h>
#include "header.h"

vi cycle(1000001);
int main() {
	cycle[1] = 1;

	rep(n, 2, 1000001) {
		if (cycle[n] > 0)
			continue;

		ll cur = n;
		vl trace;
		while (cur > 1000000 || cycle[int(cur)] == 0) {
			trace.pb(cur);
			cur = (cur % 2 ? 3 * cur + 1 : cur / 2);
		}

		rep(i, 0, sz(trace)) {
			if (trace[i] <= 1000000)
				cycle[int(trace[i])] = cycle[int(cur)] + sz(trace) - i;
		}
	}

	int i, j;
	while (cin >> i >> j) {
		int i2 = i, j2 = j, maxcycle = 0;
		if (i2 > j2)
			swap(i2, j2);

		printf("%d %d %d\n", i, j, *max_element(cycle.begin() + i2, cycle.begin() + j2 + 1));
	}
}
