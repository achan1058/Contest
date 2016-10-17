#include <bits/stdc++.h>
#include "header.h"

vi dx = { 1, 1, 1, 0, -1, -1, -1, 0 }, dy = { 1, 0, -1, -1, -1, 0, 1, 1 };
int main() {
	int n, m;
	while (cin >> n >> m && (n | m) != 0) {
		vs sky(n + 2, string(m + 2, '.'));
		rep(i, 1, n + 1) {
			rep(j, 1, m + 1)
				cin >> sky[i][j];
		}

		int num = 0;
		rep(i, 1, n + 1) {
			rep(j, 1, m + 1) {
				if (sky[i][j] != '*')
					continue;
				bool isStar = true;
				rep(k, 0, 8)
					isStar &= (sky[i + dx[k]][j + dy[k]] == '.');
				if (isStar)
					num++;
			}
		}
		printf("%d\n", num);
	}
}
