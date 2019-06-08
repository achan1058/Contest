#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, ans = 0;
	cin >> n;
	vi home(n), guest(n);
	rep(i, 0, n)
		cin >> home[i] >> guest[i];
	drep(i, j, n, n) {
		if (i == j)
			continue;
		if (home[i] == guest[j])
			ans++;
	}
	printv(ans);
}
