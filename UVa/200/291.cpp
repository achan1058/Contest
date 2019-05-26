#include <bits/stdc++.h>
#include "header.h"

vvb mat;
void st(int n, int m, bool b) {
	mat[n - 1][m - 1] = mat[m - 1][n - 1] = b;
}

string ans = "1";
void backtrack() {
	if (sz(ans) == 9) {
		print("%s", ans.c_str());
		return;
	}
	int n = ans.back() - '1';
	rep(j, 0, 5) {
		if (mat[n][j]) {
			ans += j + '1';
			mat[n][j] = mat[j][n] = false;
			backtrack();
			mat[n][j] = mat[j][n] = true;
			ans.pop_back();
		}
	}
}

int main() {
	mat = mb(5, 5, false);
	st(1, 2, true);
	st(1, 3, true);
	st(1, 5, true);
	st(2, 3, true);
	st(2, 5, true);
	st(3, 4, true);
	st(3, 5, true);
	st(4, 5, true);
	backtrack();
}
