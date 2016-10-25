#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		vvi a = mi(n + 1, n + 1, 0);
		vi s(n + 1);
		s[0] = 0;
		rep(i, 1, n + 1) {
			cin >> s[i];
			s[i] += s[i - 1];
		}
		drep(i, j, n + 1, n - i + 1) {
			a[j][j + i] = s[j + i] - s[j];
			rep(k, j + 1, j + i) {
				a[j][j + i] = max(a[j][j + i], -a[j][k] + s[j + i] - s[k]);
				a[j][j + i] = max(a[j][j + i], -a[k][j + i] + s[k] - s[j]);
			}
		}
		printf("%d\n", a[0][n]);
	}
}
