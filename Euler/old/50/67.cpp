#include <bits/stdc++.h>
#include "header.h"

int main() {
	fstream in("Euler/input/67.txt");
	vvi arr(100);
	int ans = 0, rows = 100;
	rep(i, 0, rows) {
		arr[i] = vi(i + 1);
		rep(j, 0, i + 1)
			in >> arr[i][j];
	}
	rep(i, 1, rows) {
		arr[i][0] += arr[i - 1][0];
		arr[i][i] += arr[i - 1][i - 1];
		rep(j, 1, i)
			arr[i][j] += max(arr[i - 1][j - 1], arr[i - 1][j]);
	}
	rep(j, 0, rows)
		ans = max(ans, arr[rows - 1][j]);
	printf("%d\n", ans);
}
