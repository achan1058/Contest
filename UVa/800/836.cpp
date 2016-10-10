#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	int N;
	string s;
	cin >> N;
	getline(cin, s);
	getline(cin, s);
	rep(X, 0, N) {
		vs mat;
		printf("%s", X > 0 ? "\n" : "");
		while (getline(cin, s) && s != "")
			mat.pb(s);

		int n = sz(mat), glo_max = 0;
		vvi arr = mi(n, n, 0);
		rep(i, 0, n) {
			rep(j, 0, n) {
				if (mat[i][j] == '1')
					arr[i][j] = (i == 0 ? 0: arr[i - 1][j]) + 1;
			}
		}

		rep(i, 0, n)
			glo_max = max(glo_max, get<0>(largestRectangle(arr[i])));

		printf("%d\n", glo_max);
	}
}
