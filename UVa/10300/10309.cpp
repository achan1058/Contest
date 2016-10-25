#include <bits/stdc++.h>
#include "header.h"

vi dx = { 0, 1, 0, -1, 0 }, dy = { 1, 0, -1, 0, 0 };
void press(vvb& a, int x, int y) {
	rep(i, 0, sz(dx)) {
		int nx = x + dx[i], ny = y + dy[i];
		if (nx >= 0 && nx < 10 && ny >= 0 && ny < 10)
			a[nx][ny] = !a[nx][ny];
	}
}

int brute_force(vvb a, int b) {
	int num = 0;
	rep(i, 0, 10) {
		if (b % 2) {
			press(a, 0, i);
			num++;
		}
		b /= 2;
	}

	drep(i, j, 9, 10) {
		if (a[i][j]) {
			press(a, i + 1, j);
			num++;
		}
	}

	rep(i, 0, 10) {
		if (a[9][i] != 0)
			return inf;
	}

	return num;
}

int main() {
	string s, st;
	vvb arr = mb(10, 10, false);
	while (cin >> s && s != "end") {
		rep(i, 0, 10) {
			cin >> st;
			rep(j, 0, 10)
				arr[i][j] = (st[j] == 'O');
		}

		int best = inf;
		rep(b, 0, 1024)
			best = min(best, brute_force(arr, b));
		if (best > 100)
			best = -1;
		printf("%s %d\n", s.c_str(), best);
	}
}
