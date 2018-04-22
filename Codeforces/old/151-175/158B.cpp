#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k, ans = 0;
	cin >> n;
	vi groupsz(4);
	rep(i, 0, n) {
		cin >> k;
		groupsz[k - 1]++;
	}
	ans += groupsz[3];
	ans += groupsz[2];
	groupsz[0] = max(0, groupsz[0] - groupsz[2]);

	ans += groupsz[1] / 2;
	groupsz[1] %= 2;

	if (groupsz[1]) {
		groupsz[0] = max(0, groupsz[0] - 2);
		ans++;
	}

	ans += (groupsz[0] + 3) / 4;
	printf("%d\n", ans);
}
