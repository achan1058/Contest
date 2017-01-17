#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	string s;
	forX() {
		vs mat;
		lineX();
		while (getline(cin, s) && s != "")
			mat.pb(s);

		int n = sz(mat), glo_max = 0;
		vvi arr = mi(n, n, 0);
		drep(i, j, n, n) {
			if (mat[i][j] == '1')
				arr[i][j] = (i == 0 ? 0 : arr[i - 1][j]) + 1;
		}

		rep(i, 0, n)
			glo_max = max(glo_max, get<0>(largestRectangle(arr[i])));

		printX("%d\n", glo_max);
	}
}
