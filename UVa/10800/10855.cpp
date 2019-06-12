#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k;
	while (cin >> n >> k && (n | k) != 0) {
		vs grid(n), small(k);
		read(grid);
		read(small);
		vi ans(4);
		rep(t, 0, 4) {
			drep(i, j, n - k + 1, n - k + 1) {
				bool good = true;
				drep(x, y, k, k) {
					if (small[x][y] != grid[x + i][y + j]) {
						good = false;
						goto end;
					}
				}
			end:;
				ans[t] += (good ? 1 : 0);
			}
			drep(i, j, (k + 1) / 2, k / 2) {
				swap(small[i][j], small[k - 1 - j][i]);
				swap(small[k - 1 - i][k - 1 - j], small[k - 1 - j][i]);
				swap(small[k - 1 - i][k - 1 - j], small[j][k - i - 1]);
			}
		}
		print(ans[0], ans[1], ans[2], ans[3]);
	}
}
