#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	string s;
	cin >> N;
	rep(X, 1, N + 1) {
		cin >> s;
		int n = sz(s);
		vvi best(n + 1);
		best[0] = best[1] = vi(n, 0);
		rep(i, 2, n + 1) {
			best[i] = vi(n - i + 1);
			rep(j, 0, n - i + 1)
				best[i][j] = min(min(best[i - 1][j], best[i - 1][j + 1]) + 1, best[i - 2][j + 1] + (s[j] == s[i + j - 1] ? 0 : 1));
		}
		printc("%d\n", best[n][0]);
	}
}
