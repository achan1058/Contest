#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, ans = 0;
	string s1, s2;
	cin >> n >> s1 >> s2;
	rep(i, 0, n) {
		int d = abs(s1[i] - s2[i]);
		ans += min(d, 10 - d);
	}
	printv(ans);
}
