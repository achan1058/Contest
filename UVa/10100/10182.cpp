#include <bits/stdc++.h>
#include "header.h"

vi dx = { -1, 0, 1, 1, 0, -1 }, dy = { 0, -1, -1, 0, 1, 1 };
int main() {
	int x = 0, y = 1, cur = 5;
	vpii ans(100001);
	ans[1] = { 0, 0 };
	rep(i, 2, 100001) {
		ans[i] = { x, y };
		if (x == 0 || (y == 0 && x < 0) || (y == 1 && x > 0) || x == -y)
			cur = (cur + 1) % 6;
		x += dx[cur];
		y += dy[cur];
	}

	int n;
	while (cin >> n)
		print(ans[n].first, ans[n].second);
}
