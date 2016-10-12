#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, t, ans = 0;
	vi s(4);
	cin >> n;
	rep(i, 0, n) {
		cin >> t;
		s[t - 1]++;
	}
	ans += s[3];
	t = min(s[2], s[0]);
	ans += t;
	s[2] -= t;
	s[0] -= t;
	ans += s[2];
	ans += s[1] / 2;
	if (s[1] % 2 == 1) {
		ans++;
		s[0] -= 2;
	}
	if (s[0] > 0)
		ans += (s[0] + 3) / 4;
	printf("%d\n", ans);
}
