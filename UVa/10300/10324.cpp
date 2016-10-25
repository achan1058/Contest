#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, i, j, m, M;
	string s;

	whileX(cin >> s) {
		vi arr(sz(s) + 1);
		rep(k, 0, sz(s))
			arr[k + 1] = arr[k] + s[k] - '0';

		printf("Case %d:\n", X);
		cin >> n;
		rep(k, 0, n) {
			cin >> i >> j;
			m = min(i, j);
			M = max(i, j);
			printf("%s\n", arr[M + 1] == arr[m] || arr[M + 1] - arr[m] == M - m + 1 ? "Yes" : "No");
		}
	}
}
