#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, ans = 0;
	string s;
	cin >> n >> s;
	rep(i, 1, n)
		ans += (s[i - 1] == s[i] ? 1 : 0);
	printf("%d\n", ans);
}
