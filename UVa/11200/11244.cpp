#include <bits/stdc++.h>
#include "header.h"

vi dx = { 1, 1, 1, 0, -1, -1, -1, 0 }, dy = { 1, 0, -1, -1, -1, 0, 1, 1 };
int main() {
	int n, m;
	while (cin >> n >> m && (n | m) != 0) {
		vs sky(n);
		read(sky);

		int num = 0;
		drep(i, j, n, m) {
			bool isStar = true;
			if (sky[i][j] != '*')
				continue;
			rep(k, 0, sz(dx)) {
				int nx = i + dx[k], ny = j + dy[k];
				if (nx >= 0 && nx < n && ny >= 0 && ny < m && sky[nx][ny] == '*') {
					isStar = false;
					break;
				}
			}
			if (isStar)
				num++;
		}
		printf("%d\n", num);
	}
}
