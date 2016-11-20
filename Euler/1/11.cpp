#include <bits/stdc++.h>
#include "header.h"

vi dx = { 1, 0, 1, -1 };
vi dy = { 0, 1, 1, 1 };
int prod(int i, int j, int k, const vvi& arr) {
	int prod = 1;
	rep(l, 0, 4) {
		int nx = i + dx[k] * l, ny = j + dy[k] * l;
		if (nx < 0 || nx >= 20 || ny < 0 || ny >= 20)
			return 0;
		prod *= arr[nx][ny];
	}
	return prod;
}

int main() {
	int ans = 0;
	vvi arr = mi(20, 20, 0);
	fstream in("Euler/input/11.txt");
	drep(i, j, 20, 20)
		in >> arr[i][j];

	assert(prod(6, 8, 2, arr) == 1788696);
	drep(i, j, 20, 20) {
		rep(k, 0, sz(dx))
			ans = max(ans, prod(i, j, k, arr));
	}
	printf("%d\n", ans);
}
