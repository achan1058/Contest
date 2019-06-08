#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int N, ans = 0, v, p;
		cin >> N >> p;
		vb days(N + 1);
		rep(i, 0, p) {
			cin >> v;
			for (int j = v; j <= N; j += v) {
				if (j % 7 == 6 || j % 7 == 0)
					continue;
				ans += days[j] ? 0 : 1;
				days[j] = true;
			}
		}
		print(ans);
	}
}
