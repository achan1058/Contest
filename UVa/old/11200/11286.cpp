#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		map<vi, int> popular;
		int mx = 0, ans = 0;
		vi c(5);
		for (int i = 0; i < n; i++) {
			read(c);
			sort(c.begin(), c.end());
			popular[c]++;
			mx = max(mx, popular[c]);
		}
		for (auto& p : popular) {
			if (p.second == mx)
				ans += mx;
		}
		printf("%d\n", ans);
	}
}
