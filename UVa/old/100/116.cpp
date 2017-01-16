#include <bits/stdc++.h>
#include "header.h"

int main() {
	int m, n;
	while (cin >> m >> n) {
		vvi arr = mi(m, n, 0), total = mi(m, n + 1, 0), prev = mi(m, n, 0);
		read(arr);

		rrep(j, n - 1, 0) {
			rep(i, 0, m) {
				vi dirs = { i, (i + 1) % m, (i + m - 1) % m };
				sort(all(dirs));
				total[i][j] = inf;

				rep(k, 0, 3) {
					if (total[i][j] > total[dirs[k]][j + 1] + arr[i][j]) {
						total[i][j] = total[dirs[k]][j + 1] + arr[i][j];
						prev[i][j] = dirs[k];
					}
				}
			}
		}

		int mx = inf, back = 0;
		rep(i, 0, m) {
			if (mx > total[i][0]) {
				mx = total[i][0];
				back = i;
			}
		}

		printf("%d", back + 1);
		rep(j, 1, n) {
			back = prev[back][j - 1];
			printf(" %d", back + 1);
		}
		printf("\n%d\n", mx);
	}
}
