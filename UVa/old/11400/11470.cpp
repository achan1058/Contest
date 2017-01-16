#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		vvi a = mi(n, n, 0);
		read(a);
		printf("Case %d:", X);

		rep(m, 0, (n + 1) / 2) {
			int M = n - 1 - m;
			ll sum = 0;
			rep(i, m + 1, M) {
				sum += a[i][m];
				sum += a[i][M];
				sum += a[m][i];
				sum += a[M][i];
			}

			if (m != M) {
				sum += a[m][m];
				sum += a[m][M];
				sum += a[M][m];
			}
			sum += a[M][M];
			printf(" %d", sum);
		}
		printf("\n");
	}
}
